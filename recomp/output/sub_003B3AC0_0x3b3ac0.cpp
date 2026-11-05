#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B3AC0
// Address: 0x3b3ac0 - 0x3b3c40
void sub_003B3AC0_0x3b3ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3AC0_0x3b3ac0");
#endif

    ctx->pc = 0x3b3ac0u;

    // 0x3b3ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b3ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b3ac4: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x3b3ac4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3ac8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b3ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b3acc: 0x3c0d0048  lui         $t5, 0x48
    ctx->pc = 0x3b3accu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)72 << 16));
    // 0x3b3ad0: 0x25ad00d0  addiu       $t5, $t5, 0xD0
    ctx->pc = 0x3b3ad0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 208));
    // 0x3b3ad4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3b3ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3b3ad8: 0x8f03001c  lw          $v1, 0x1C($t8)
    ctx->pc = 0x3b3ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 28)));
    // 0x3b3adc: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x3b3adcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x3b3ae0: 0x8f020020  lw          $v0, 0x20($t8)
    ctx->pc = 0x3b3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 32)));
    // 0x3b3ae4: 0x240bf211  addiu       $t3, $zero, -0xDEF
    ctx->pc = 0x3b3ae4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963729));
    // 0x3b3ae8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b3ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b3aec: 0x240ff82a  addiu       $t7, $zero, -0x7D6
    ctx->pc = 0x3b3aecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965290));
    // 0x3b3af0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b3af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b3af4: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x3b3af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x3b3af8: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x3b3af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x3b3afc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3b3afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b3b00: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x3b3b00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b3b04: 0x8f020028  lw          $v0, 0x28($t8)
    ctx->pc = 0x3b3b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 40)));
    // 0x3b3b08: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x3b3b08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3b3b0c: 0x70a82818  mult1       $a1, $a1, $t0
    ctx->pc = 0x3b3b0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b3b10: 0x8f080008  lw          $t0, 0x8($t8)
    ctx->pc = 0x3b3b10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x3b3b14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b3b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b3b18: 0x8f0a0014  lw          $t2, 0x14($t8)
    ctx->pc = 0x3b3b18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x3b3b1c: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x3b3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x3b3b20: 0x8f0c0024  lw          $t4, 0x24($t8)
    ctx->pc = 0x3b3b20u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 36)));
    // 0x3b3b24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3b3b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b3b28: 0x24020def  addiu       $v0, $zero, 0xDEF
    ctx->pc = 0x3b3b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3567));
    // 0x3b3b2c: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x3b3b2cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x3b3b30: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x3b3b30u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x3b3b34: 0xa34818  mult        $t1, $a1, $v1
    ctx->pc = 0x3b3b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3b3b38: 0x70831818  mult1       $v1, $a0, $v1
    ctx->pc = 0x3b3b38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b3b3c: 0x8f10000c  lw          $s0, 0xC($t8)
    ctx->pc = 0x3b3b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 12)));
    // 0x3b3b40: 0xa7080  sll         $t6, $t2, 2
    ctx->pc = 0x3b3b40u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x3b3b44: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x3b3b44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3b48: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x3b3b48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x3b3b4c: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x3b3b4cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x3b3b50: 0x240807d6  addiu       $t0, $zero, 0x7D6
    ctx->pc = 0x3b3b50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2006));
    // 0x3b3b54: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x3b3b54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x3b3b58: 0x94b03  sra         $t1, $t1, 12
    ctx->pc = 0x3b3b58u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 12));
    // 0x3b3b5c: 0x6b5818  mult        $t3, $v1, $t3
    ctx->pc = 0x3b3b5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x3b3b60: 0x70681818  mult1       $v1, $v1, $t0
    ctx->pc = 0x3b3b60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b3b64: 0x712f7818  mult1       $t7, $t1, $t7
    ctx->pc = 0x3b3b64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 15); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x3b3b68: 0x1224818  mult        $t1, $t1, $v0
    ctx->pc = 0x3b3b68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3b3b6c: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x3b3b6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x3b3b70: 0x1506821  addu        $t5, $t2, $s0
    ctx->pc = 0x3b3b70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x3b3b74: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x3b3b74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3b78: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x3b3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3b3b7c: 0x8da80000  lw          $t0, 0x0($t5)
    ctx->pc = 0x3b3b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3b3b80: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x3b3b80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x3b3b84: 0x8d4c0000  lw          $t4, 0x0($t2)
    ctx->pc = 0x3b3b84u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3b3b88: 0xb5b03  sra         $t3, $t3, 12
    ctx->pc = 0x3b3b88u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 12));
    // 0x3b3b8c: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x3b3b8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b3b90: 0xadcb0000  sw          $t3, 0x0($t6)
    ctx->pc = 0x3b3b90u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 11));
    // 0x3b3b94: 0x240b7fff  addiu       $t3, $zero, 0x7FFF
    ctx->pc = 0x3b3b94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x3b3b98: 0x70822018  mult1       $a0, $a0, $v0
    ctx->pc = 0x3b3b98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3b3b9c: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x3b3b9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x3b3ba0: 0x8f020014  lw          $v0, 0x14($t8)
    ctx->pc = 0x3b3ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x3b3ba4: 0x94b03  sra         $t1, $t1, 12
    ctx->pc = 0x3b3ba4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 12));
    // 0x3b3ba8: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x3b3ba8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x3b3bac: 0x240a7fff  addiu       $t2, $zero, 0x7FFF
    ctx->pc = 0x3b3bacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x3b3bb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b3bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b3bb4: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x3b3bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x3b3bb8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3b3bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3b3bbc: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x3b3bbcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x3b3bc0: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x3b3bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x3b3bc4: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b3bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x3b3bc8: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x3b3bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x3b3bcc: 0x240c8000  addiu       $t4, $zero, -0x8000
    ctx->pc = 0x3b3bccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x3b3bd0: 0x8f080014  lw          $t0, 0x14($t8)
    ctx->pc = 0x3b3bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x3b3bd4: 0x144502a  slt         $t2, $t2, $a0
    ctx->pc = 0x3b3bd4u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3b3bd8: 0x165582a  slt         $t3, $t3, $a1
    ctx->pc = 0x3b3bd8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3b3bdc: 0x28a38000  slti        $v1, $a1, -0x8000
    ctx->pc = 0x3b3bdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x3b3be0: 0x288d8000  slti        $t5, $a0, -0x8000
    ctx->pc = 0x3b3be0u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x3b3be4: 0x8f090018  lw          $t1, 0x18($t8)
    ctx->pc = 0x3b3be4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 24)));
    // 0x3b3be8: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x3b3be8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x3b3bec: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x3b3becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x3b3bf0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3b3bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3b3bf4: 0x18d200b  movn        $a0, $t4, $t5
    ctx->pc = 0x3b3bf4u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 12));
    // 0x3b3bf8: 0x394a0000  xori        $t2, $t2, 0x0
    ctx->pc = 0x3b3bf8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)0);
    // 0x3b3bfc: 0x396b0000  xori        $t3, $t3, 0x0
    ctx->pc = 0x3b3bfcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)0);
    // 0x3b3c00: 0x24037fff  addiu       $v1, $zero, 0x7FFF
    ctx->pc = 0x3b3c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x3b3c04: 0x4a200b  movn        $a0, $v0, $t2
    ctx->pc = 0x3b3c04u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x3b3c08: 0x6b280b  movn        $a1, $v1, $t3
    ctx->pc = 0x3b3c08u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3b3c0c: 0x109482a  slt         $t1, $t0, $t1
    ctx->pc = 0x3b3c0cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x3b3c10: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x3b3c10u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b3c14: 0xaf080014  sw          $t0, 0x14($t8)
    ctx->pc = 0x3b3c14u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 20), GPR_U32(ctx, 8));
    // 0x3b3c18: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B3C18u;
    {
        const bool branch_taken_0x3b3c18 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C18u;
        // 0x3b3c1c: 0xa4e50000  sh          $a1, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3c18) {
            ctx->pc = 0x3B3C24u;
            goto label_3b3c24;
        }
    }
    ctx->pc = 0x3B3C20u;
    // 0x3b3c20: 0xaf000014  sw          $zero, 0x14($t8)
    ctx->pc = 0x3b3c20u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 20), GPR_U32(ctx, 0));
label_3b3c24:
    // 0x3b3c24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b3c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3c28: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C28u;
        // 0x3b3c2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3C30u;
    // 0x3b3c30: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3b3c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b3c34: 0x0  nop
    ctx->pc = 0x3b3c34u;
    // NOP
    // 0x3b3c38: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3b3c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3b3c3c: 0x0  nop
    ctx->pc = 0x3b3c3cu;
    // NOP
    ctx->pc = 0x3b3c40u;
}
