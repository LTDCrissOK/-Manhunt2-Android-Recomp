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

// Function: sub_0034EB18
// Address: 0x34eb18 - 0x34ee00
void sub_0034EB18_0x34eb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EB18_0x34eb18");
#endif

    switch (ctx->pc) {
        case 0x34ebecu: goto label_34ebec;
        case 0x34ec3cu: goto label_34ec3c;
        case 0x34ed18u: goto label_34ed18;
        case 0x34edd0u: goto label_34edd0;
        default: break;
    }

    ctx->pc = 0x34eb18u;

    // 0x34eb18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34eb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34eb1c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x34eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x34eb20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34eb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34eb24: 0x8c62c6bc  lw          $v0, -0x3944($v1)
    ctx->pc = 0x34eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FC6BCu));
    // 0x34eb28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34eb28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eb2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34eb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34eb30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34eb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34eb34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34eb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x34eb38: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x34eb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x34eb3c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x34eb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x34eb40: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x34eb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x34eb44: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x34eb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x34eb48: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34eb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x34eb4c: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x34EB4Cu;
    {
        const bool branch_taken_0x34eb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EB4Cu;
        // 0x34eb50: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eb4c) {
            ctx->pc = 0x34EDC8u;
            goto label_34edc8;
        }
    }
    ctx->pc = 0x34EB54u;
    // 0x34eb54: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x34eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x34eb58: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x34eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x34eb5c: 0x8c75c6b8  lw          $s5, -0x3948($v1)
    ctx->pc = 0x34eb5cu;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x3FC6B8u));
    // 0x34eb60: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x34eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34eb64: 0x3c12005c  lui         $s2, 0x5C
    ctx->pc = 0x34eb64u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)92 << 16));
    // 0x34eb68: 0x3c1e00ff  lui         $fp, 0xFF
    ctx->pc = 0x34eb68u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)255 << 16));
    // 0x34eb6c: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x34eb6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34eb70: 0x8e47ef00  lw          $a3, -0x1100($s2)
    ctx->pc = 0x34eb70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962944)));
    // 0x34eb74: 0x2656ef00  addiu       $s6, $s2, -0x1100
    ctx->pc = 0x34eb74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962944));
    // 0x34eb78: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x34eb78u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
    // 0x34eb7c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x34eb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x34eb80: 0x3c1300ff  lui         $s3, 0xFF
    ctx->pc = 0x34eb80u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)255 << 16));
    // 0x34eb84: 0x24b4d818  addiu       $s4, $a1, -0x27E8
    ctx->pc = 0x34eb84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957080));
    // 0x34eb88: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x34eb88u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x34eb8c: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x34eb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x34eb90: 0x3c080800  lui         $t0, 0x800
    ctx->pc = 0x34eb90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
    // 0x34eb94: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x34eb94u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x34eb98: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x34eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x34eb9c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x34eb9cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x34eba0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x34eba0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x34eba4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34eba8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x34eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x34ebac: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x34ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x34ebb0: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x34ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x34ebb4: 0x533024  and         $a2, $v0, $s3
    ctx->pc = 0x34ebb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x34ebb8: 0x7e1824  and         $v1, $v1, $fp
    ctx->pc = 0x34ebb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x34ebbc: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x34ebbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x34ebc0: 0xaec30018  sw          $v1, 0x18($s6)
    ctx->pc = 0x34ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 3));
    // 0x34ebc4: 0x772025  or          $a0, $v1, $s7
    ctx->pc = 0x34ebc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x34ebc8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x34ebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x34ebcc: 0x8e45ef00  lw          $a1, -0x1100($s2)
    ctx->pc = 0x34ebccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962944)));
    // 0x34ebd0: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x34ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x34ebd4: 0xae43ef00  sw          $v1, -0x1100($s2)
    ctx->pc = 0x34ebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294962944), GPR_U32(ctx, 3));
    // 0x34ebd8: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x34ebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x34ebdc: 0x8e43ef00  lw          $v1, -0x1100($s2)
    ctx->pc = 0x34ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962944)));
    // 0x34ebe0: 0xae42ef00  sw          $v0, -0x1100($s2)
    ctx->pc = 0x34ebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294962944), GPR_U32(ctx, 2));
    // 0x34ebe4: 0xc0da224  jal         func_368890
    ctx->pc = 0x34EBE4u;
    SET_GPR_U32(ctx, 31, 0x34EBECu);
    ctx->pc = 0x34EBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EBE4u;
    // 0x34ebe8: 0x24710004  addiu       $s1, $v1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368890u, 0x34EBE4u, 0x34EBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EBECu;
label_34ebec:
    // 0x34ebec: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x34ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x34ebf0: 0x8e46ef00  lw          $a2, -0x1100($s2)
    ctx->pc = 0x34ebf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962944)));
    // 0x34ebf4: 0x7e1824  and         $v1, $v1, $fp
    ctx->pc = 0x34ebf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x34ebf8: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x34ebf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x34ebfc: 0xaec30018  sw          $v1, 0x18($s6)
    ctx->pc = 0x34ebfcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 3));
    // 0x34ec00: 0x772025  or          $a0, $v1, $s7
    ctx->pc = 0x34ec00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x34ec04: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x34ec04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x34ec08: 0x3c050a00  lui         $a1, 0xA00
    ctx->pc = 0x34ec08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2560 << 16));
    // 0x34ec0c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x34ec0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x34ec10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34ec10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ec14: 0x8e45ef00  lw          $a1, -0x1100($s2)
    ctx->pc = 0x34ec14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962944)));
    // 0x34ec18: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x34ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x34ec1c: 0xae43ef00  sw          $v1, -0x1100($s2)
    ctx->pc = 0x34ec1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294962944), GPR_U32(ctx, 3));
    // 0x34ec20: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x34ec20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x34ec24: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x34ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34ec28: 0xaec20018  sw          $v0, 0x18($s6)
    ctx->pc = 0x34ec28u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 2));
    // 0x34ec2c: 0x8e42ef00  lw          $v0, -0x1100($s2)
    ctx->pc = 0x34ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962944)));
    // 0x34ec30: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x34ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x34ec34: 0xc0c7b26  jal         func_31EC98
    ctx->pc = 0x34EC34u;
    SET_GPR_U32(ctx, 31, 0x34EC3Cu);
    ctx->pc = 0x34EC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EC34u;
    // 0x34ec38: 0xae42ef00  sw          $v0, -0x1100($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294962944), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EC98u, 0x34EC34u, 0x34EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EC3Cu;
label_34ec3c:
    // 0x34ec3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34ec3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34ec40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34ec40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ec44: 0x3c024800  lui         $v0, 0x4800
    ctx->pc = 0x34ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18432 << 16));
    // 0x34ec48: 0x8e45ef00  lw          $a1, -0x1100($s2)
    ctx->pc = 0x34ec48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962944)));
    // 0x34ec4c: 0x3c044900  lui         $a0, 0x4900
    ctx->pc = 0x34ec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18688 << 16));
    // 0x34ec50: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x34ec50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x34ec54: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x34ec54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ec58: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x34ec58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x34ec5c: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x34ec5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x34ec60: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x34ec60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x34ec64: 0x34c6019f  ori         $a2, $a2, 0x19F
    ctx->pc = 0x34ec64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)415);
    // 0x34ec68: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x34ec68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x34ec6c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x34ec6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x34ec70: 0x8e44ef00  lw          $a0, -0x1100($s2)
    ctx->pc = 0x34ec70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962944)));
    // 0x34ec74: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x34ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x34ec78: 0xae42ef00  sw          $v0, -0x1100($s2)
    ctx->pc = 0x34ec78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294962944), GPR_U32(ctx, 2));
    // 0x34ec7c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x34ec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x34ec80: 0x8e45ef00  lw          $a1, -0x1100($s2)
    ctx->pc = 0x34ec80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962944)));
    // 0x34ec84: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x34ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x34ec88: 0xae42ef00  sw          $v0, -0x1100($s2)
    ctx->pc = 0x34ec88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294962944), GPR_U32(ctx, 2));
    // 0x34ec8c: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x34ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x34ec90: 0x8e46ef00  lw          $a2, -0x1100($s2)
    ctx->pc = 0x34ec90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962944)));
    // 0x34ec94: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x34ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x34ec98: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x34EC98u;
    {
        const bool branch_taken_0x34ec98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EC98u;
        // 0x34ec9c: 0xae42ef00  sw          $v0, -0x1100($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294962944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ec98) {
            ctx->pc = 0x34ECDCu;
            goto label_34ecdc;
        }
    }
    ctx->pc = 0x34ECA0u;
    // 0x34eca0: 0x111202  srl         $v0, $s1, 8
    ctx->pc = 0x34eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
    // 0x34eca4: 0x2332024  and         $a0, $s1, $s3
    ctx->pc = 0x34eca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x34eca8: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x34eca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x34ecac: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x34ecacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x34ecb0: 0xaec20018  sw          $v0, 0x18($s6)
    ctx->pc = 0x34ecb0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 2));
    // 0x34ecb4: 0x571825  or          $v1, $v0, $s7
    ctx->pc = 0x34ecb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x34ecb8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x34ecb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x34ecbc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x34ecbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x34ecc0: 0x8e43ef00  lw          $v1, -0x1100($s2)
    ctx->pc = 0x34ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962944)));
    // 0x34ecc4: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x34ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x34ecc8: 0xae42ef00  sw          $v0, -0x1100($s2)
    ctx->pc = 0x34ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294962944), GPR_U32(ctx, 2));
    // 0x34eccc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x34ecccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x34ecd0: 0x8e42ef00  lw          $v0, -0x1100($s2)
    ctx->pc = 0x34ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962944)));
    // 0x34ecd4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x34ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x34ecd8: 0xae42ef00  sw          $v0, -0x1100($s2)
    ctx->pc = 0x34ecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294962944), GPR_U32(ctx, 2));
label_34ecdc:
    // 0x34ecdc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x34ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x34ece0: 0x8e44ef00  lw          $a0, -0x1100($s2)
    ctx->pc = 0x34ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962944)));
    // 0x34ece4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x34ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x34ece8: 0x2a31825  or          $v1, $s5, $v1
    ctx->pc = 0x34ece8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
    // 0x34ecec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34ececu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x34ecf0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x34ecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x34ecf4: 0x8e42ef00  lw          $v0, -0x1100($s2)
    ctx->pc = 0x34ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962944)));
    // 0x34ecf8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x34ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x34ecfc: 0x1aa00032  blez        $s5, . + 4 + (0x32 << 2)
    ctx->pc = 0x34ECFCu;
    {
        const bool branch_taken_0x34ecfc = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x34ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ECFCu;
        // 0x34ed00: 0xae42ef00  sw          $v0, -0x1100($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294962944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ecfc) {
            ctx->pc = 0x34EDC8u;
            goto label_34edc8;
        }
    }
    ctx->pc = 0x34ED04u;
    // 0x34ed04: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x34ed08: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x34ed08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ed0c: 0x2447ded8  addiu       $a3, $v0, -0x2128
    ctx->pc = 0x34ed0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958808));
    // 0x34ed10: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x34ed10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x34ed14: 0x0  nop
    ctx->pc = 0x34ed14u;
    // NOP
label_34ed18:
    // 0x34ed18: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x34ed18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34ed1c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x34ed1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x34ed20: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x34ed20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34ed24: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x34ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x34ed28: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x34ed28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ed2c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x34ed2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x34ed30: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x34ed30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34ed34: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x34ed34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34ed38: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x34ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x34ed3c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x34ed3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ed40: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x34ed40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x34ed44: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x34ed44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34ed48: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x34ed48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34ed4c: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x34ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x34ed50: 0x90460008  lbu         $a2, 0x8($v0)
    ctx->pc = 0x34ed50u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x34ed54: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x34ed54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x34ed58: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x34ed58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x34ed5c: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x34ed5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x34ed60: 0x90850001  lbu         $a1, 0x1($a0)
    ctx->pc = 0x34ed60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x34ed64: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x34ed64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x34ed68: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x34ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x34ed6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34ed6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x34ed70: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x34ed70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x34ed74: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x34ed74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x34ed78: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x34ed78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x34ed7c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x34ed7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x34ed80: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x34ed80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34ed84: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x34ed84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34ed88: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x34ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x34ed8c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x34ed8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ed90: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x34ed90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x34ed94: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x34ed94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34ed98: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x34ed98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34ed9c: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x34ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x34eda0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x34eda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34eda4: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x34eda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x34eda8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x34eda8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34edac: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x34edacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x34edb0: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x34edb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34edb4: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x34edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x34edb8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x34edb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34edbc: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x34edbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x34edc0: 0x1520ffd5  bnez        $t1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x34EDC0u;
    {
        const bool branch_taken_0x34edc0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x34EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EDC0u;
        // 0x34edc4: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34edc0) {
            ctx->pc = 0x34ED18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34ed18;
        }
    }
    ctx->pc = 0x34EDC8u;
label_34edc8:
    // 0x34edc8: 0xc0d3ac0  jal         func_34EB00
    ctx->pc = 0x34EDC8u;
    SET_GPR_U32(ctx, 31, 0x34EDD0u);
    ctx->pc = 0x34EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EB00u, 0x34EDC8u, 0x34EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EDD0u;
label_34edd0:
    // 0x34edd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34edd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34edd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34edd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34edd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34edd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34eddc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34eddcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34ede0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x34ede0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34ede4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x34ede4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34ede8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x34ede8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34edec: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x34edecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34edf0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34edf0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34edf4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34edf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34edf8: 0x3e00008  jr          $ra
    ctx->pc = 0x34EDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EDF8u;
        // 0x34edfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EE00u;
}
