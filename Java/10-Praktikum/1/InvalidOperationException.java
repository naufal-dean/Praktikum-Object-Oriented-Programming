// Nama   : Naufal Dean Anugrah
// NIM    : 13518123
// Tanggal: 2 April 2020
// Topik  : Exception

class InvalidOperationException extends Throwable {
  private String opType;
  private String description;

  public InvalidOperationException(String opType, String description) {
    this.opType = opType;
    this.description = description;
  }

  public String getOpType() {
    return this.opType;
  }

  public String getDescription() {
    return this.description;
  }
}
