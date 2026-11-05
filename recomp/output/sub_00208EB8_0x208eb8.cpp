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

// Function: sub_00208EB8
// Address: 0x208eb8 - 0x209128
void sub_00208EB8_0x208eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208EB8_0x208eb8");
#endif

    switch (ctx->pc) {
        case 0x208ef8u: goto label_208ef8;
        case 0x208f14u: goto label_208f14;
        case 0x208f20u: goto label_208f20;
        case 0x208f58u: goto label_208f58;
        case 0x208f6cu: goto label_208f6c;
        case 0x208ff0u: goto label_208ff0;
        case 0x209090u: goto label_209090;
        case 0x2090a4u: goto label_2090a4;
        case 0x2090b8u: goto label_2090b8;
        case 0x2090f8u: goto label_2090f8;
        default: break;
    }

    ctx->pc = 0x208eb8u;

    // 0x208eb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x208eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x208ebc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x208ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x208ec0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x208ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x208ec4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x208ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ec8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x208ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x208ecc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x208eccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ed0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x208ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x208ed4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x208ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ed8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x208ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x208edc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x208edcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ee0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x208ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x208ee4: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x208ee4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ee8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x208ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x208eec: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x208eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x208ef0: 0xc0d5b9a  jal         func_356E68
    ctx->pc = 0x208EF0u;
    SET_GPR_U32(ctx, 31, 0x208EF8u);
    ctx->pc = 0x208EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208EF0u;
    // 0x208ef4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356E68u, 0x208EF0u, 0x208EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208EF8u;
label_208ef8:
    // 0x208ef8: 0x8e2233c4  lw          $v0, 0x33C4($s1)
    ctx->pc = 0x208ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13252)));
    // 0x208efc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208EFCu;
    {
        const bool branch_taken_0x208efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EFCu;
        // 0x208f00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208efc) {
            ctx->pc = 0x208F0Cu;
            goto label_208f0c;
        }
    }
    ctx->pc = 0x208F04u;
    // 0x208f04: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x208F04u;
    {
        const bool branch_taken_0x208f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F04u;
        // 0x208f08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f04) {
            ctx->pc = 0x2090FCu;
            goto label_2090fc;
        }
    }
    ctx->pc = 0x208F0Cu;
label_208f0c:
    // 0x208f0c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x208F0Cu;
    SET_GPR_U32(ctx, 31, 0x208F14u);
    ctx->pc = 0x208F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208F0Cu;
    // 0x208f10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x208F0Cu, 0x208F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F14u;
label_208f14:
    // 0x208f14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x208f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f18: 0xc0d7596  jal         func_35D658
    ctx->pc = 0x208F18u;
    SET_GPR_U32(ctx, 31, 0x208F20u);
    ctx->pc = 0x208F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208F18u;
    // 0x208f1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D658u, 0x208F18u, 0x208F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F20u;
label_208f20:
    // 0x208f20: 0x8e2533c4  lw          $a1, 0x33C4($s1)
    ctx->pc = 0x208f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13252)));
    // 0x208f24: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x208f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x208f28: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x208f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x208f2c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x208f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x208f30: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x208f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x208f34: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x208f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x208f38: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x208f38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x208f3c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x208f3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x208f40: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x208F40u;
    {
        const bool branch_taken_0x208f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208f40) {
            ctx->pc = 0x208F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208F40u;
            // 0x208f44: 0x8e2433c4  lw          $a0, 0x33C4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208FA0u;
            goto label_208fa0;
        }
    }
    ctx->pc = 0x208F48u;
    // 0x208f48: 0x3c12cccc  lui         $s2, 0xCCCC
    ctx->pc = 0x208f48u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52428 << 16));
    // 0x208f4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x208f4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f50: 0x3652cccd  ori         $s2, $s2, 0xCCCD
    ctx->pc = 0x208f50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)52429);
    // 0x208f54: 0x0  nop
    ctx->pc = 0x208f54u;
    // NOP
label_208f58:
    // 0x208f58: 0x8e2233c4  lw          $v0, 0x33C4($s1)
    ctx->pc = 0x208f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13252)));
    // 0x208f5c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x208f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208f60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x208f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208f64: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x208F64u;
    SET_GPR_U32(ctx, 31, 0x208F6Cu);
    ctx->pc = 0x208F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208F64u;
    // 0x208f68: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x208F64u, 0x208F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F6Cu;
label_208f6c:
    // 0x208f6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x208f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x208f70: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x208F70u;
    {
        const bool branch_taken_0x208f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F70u;
        // 0x208f74: 0x8e2433c4  lw          $a0, 0x33C4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f70) {
            ctx->pc = 0x208FA0u;
            goto label_208fa0;
        }
    }
    ctx->pc = 0x208F78u;
    // 0x208f78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x208f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x208f7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x208f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x208f80: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x208f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x208f84: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x208f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208f88: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x208f88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x208f8c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x208f8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x208f90: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x208f90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x208f94: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x208F94u;
    {
        const bool branch_taken_0x208f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F94u;
        // 0x208f98: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f94) {
            ctx->pc = 0x208F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208f58;
        }
    }
    ctx->pc = 0x208F9Cu;
    // 0x208f9c: 0x8e2433c4  lw          $a0, 0x33C4($s1)
    ctx->pc = 0x208f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13252)));
label_208fa0:
    // 0x208fa0: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x208fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x208fa4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x208fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x208fa8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x208fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x208fac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x208facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x208fb0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x208fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x208fb4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x208fb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x208fb8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x208fb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x208fbc: 0x12020036  beq         $s0, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x208FBCu;
    {
        const bool branch_taken_0x208fbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x208FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FBCu;
        // 0x208fc0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208fbc) {
            ctx->pc = 0x209098u;
            goto label_209098;
        }
    }
    ctx->pc = 0x208FC4u;
    // 0x208fc4: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x208fc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x208fc8: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x208fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x208fcc: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x208fccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x208fd0: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x208FD0u;
    {
        const bool branch_taken_0x208fd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x208FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FD0u;
        // 0x208fd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208fd0) {
            ctx->pc = 0x209008u;
            goto label_209008;
        }
    }
    ctx->pc = 0x208FD8u;
    // 0x208fd8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x208fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x208fdc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x208fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x208fe0: 0x5054000a  beql        $v0, $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x208FE0u;
    {
        const bool branch_taken_0x208fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x208fe0) {
            ctx->pc = 0x208FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208FE0u;
            // 0x208fe4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20900Cu;
            goto label_20900c;
        }
    }
    ctx->pc = 0x208FE8u;
    // 0x208fe8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x208fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x208fec: 0x0  nop
    ctx->pc = 0x208fecu;
    // NOP
label_208ff0:
    // 0x208ff0: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x208ff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x208ff4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208FF4u;
    {
        const bool branch_taken_0x208ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FF4u;
        // 0x208ff8: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ff4) {
            ctx->pc = 0x209008u;
            goto label_209008;
        }
    }
    ctx->pc = 0x208FFCu;
    // 0x208ffc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x208ffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209000: 0x5454fffb  bnel        $v0, $s4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x209000u;
    {
        const bool branch_taken_0x209000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x209000) {
            ctx->pc = 0x209004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209000u;
            // 0x209004: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208ff0;
        }
    }
    ctx->pc = 0x209008u;
label_209008:
    // 0x209008: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x209008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_20900c:
    // 0x20900c: 0x10a20022  beq         $a1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x20900Cu;
    {
        const bool branch_taken_0x20900c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x209010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20900Cu;
        // 0x209010: 0x240b0014  addiu       $t3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20900c) {
            ctx->pc = 0x209098u;
            goto label_209098;
        }
    }
    ctx->pc = 0x209014u;
    // 0x209014: 0x8c89000c  lw          $t1, 0xC($a0)
    ctx->pc = 0x209014u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x209018: 0xab1818  mult        $v1, $a1, $t3
    ctx->pc = 0x209018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20901c: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x20901cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x209020: 0x163040  sll         $a2, $s6, 1
    ctx->pc = 0x209020u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x209024: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x209024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209028: 0x26c80001  addiu       $t0, $s6, 0x1
    ctx->pc = 0x209028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x20902c: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x20902cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x209030: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x209030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x209034: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x209034u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209038: 0x90650001  lbu         $a1, 0x1($v1)
    ctx->pc = 0x209038u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x20903c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x20903cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x209040: 0x944a0000  lhu         $t2, 0x0($v0)
    ctx->pc = 0x209040u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209044: 0x15050003  bne         $t0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x209044u;
    {
        const bool branch_taken_0x209044 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x209048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209044u;
        // 0x209048: 0x20a8021  addu        $s0, $s0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209044) {
            ctx->pc = 0x209054u;
            goto label_209054;
        }
    }
    ctx->pc = 0x20904Cu;
    // 0x20904c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20904cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209050: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x209050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_209054:
    // 0x209054: 0xeb1818  mult        $v1, $a3, $t3
    ctx->pc = 0x209054u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x209058: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x209058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20905c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20905Cu;
    {
        const bool branch_taken_0x20905c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20905c) {
            ctx->pc = 0x209060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20905Cu;
            // 0x209060: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x209064u;
            goto label_209064;
        }
    }
    ctx->pc = 0x209064u;
label_209064:
    // 0x209064: 0x83040  sll         $a2, $t0, 1
    ctx->pc = 0x209064u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x209068: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x209068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20906c: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x20906cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x209070: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x209070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x209074: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x209074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x209078: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x209078u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20907c: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x20907cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x209080: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x209080u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x209084: 0x8812  mflo        $s1
    ctx->pc = 0x209084u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x209088: 0xc0d5bb0  jal         func_356EC0
    ctx->pc = 0x209088u;
    SET_GPR_U32(ctx, 31, 0x209090u);
    ctx->pc = 0x20908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209088u;
    // 0x20908c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356EC0u, 0x209088u, 0x209090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209090u;
label_209090:
    // 0x209090: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x209090u;
    {
        const bool branch_taken_0x209090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209090) {
            ctx->pc = 0x2090ACu;
            goto label_2090ac;
        }
    }
    ctx->pc = 0x209098u;
label_209098:
    // 0x209098: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x209098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20909c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x20909Cu;
    SET_GPR_U32(ctx, 31, 0x2090A4u);
    ctx->pc = 0x2090A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20909Cu;
    // 0x2090a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x20909Cu, 0x2090A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2090A4u;
label_2090a4:
    // 0x2090a4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2090A4u;
    {
        const bool branch_taken_0x2090a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2090A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090A4u;
        // 0x2090a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2090a4) {
            ctx->pc = 0x2090FCu;
            goto label_2090fc;
        }
    }
    ctx->pc = 0x2090ACu;
label_2090ac:
    // 0x2090ac: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x2090ACu;
    {
        const bool branch_taken_0x2090ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2090B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090ACu;
        // 0x2090b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2090ac) {
            ctx->pc = 0x2090ECu;
            goto label_2090ec;
        }
    }
    ctx->pc = 0x2090B4u;
    // 0x2090b4: 0x0  nop
    ctx->pc = 0x2090b4u;
    // NOP
label_2090b8:
    // 0x2090b8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2090b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2090bc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2090bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2090c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2090c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2090c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2090c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2090c8: 0xb1202b  sltu        $a0, $a1, $s1
    ctx->pc = 0x2090c8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2090cc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2090ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2090d0: 0x82060001  lb          $a2, 0x1($s0)
    ctx->pc = 0x2090d0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2090d4: 0x82070002  lb          $a3, 0x2($s0)
    ctx->pc = 0x2090d4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2090d8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2090d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2090dc: 0xa0660001  sb          $a2, 0x1($v1)
    ctx->pc = 0x2090dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x2090e0: 0xa0670002  sb          $a3, 0x2($v1)
    ctx->pc = 0x2090e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x2090e4: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2090E4u;
    {
        const bool branch_taken_0x2090e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2090E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090E4u;
        // 0x2090e8: 0x26100003  addiu       $s0, $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2090e4) {
            ctx->pc = 0x2090B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2090b8;
        }
    }
    ctx->pc = 0x2090ECu;
label_2090ec:
    // 0x2090ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2090ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2090f0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2090F0u;
    SET_GPR_U32(ctx, 31, 0x2090F8u);
    ctx->pc = 0x2090F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2090F0u;
    // 0x2090f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2090F0u, 0x2090F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2090F8u;
label_2090f8:
    // 0x2090f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2090f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2090fc:
    // 0x2090fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2090fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209100: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x209100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x209104: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x209104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209108: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x209108u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20910c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20910cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209110: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x209110u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209114: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x209114u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x209118: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x209118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20911c: 0x3e00008  jr          $ra
    ctx->pc = 0x20911Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20911Cu;
        // 0x209120: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20911Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209124u;
    // 0x209124: 0x0  nop
    ctx->pc = 0x209124u;
    // NOP
    ctx->pc = 0x209128u;
}
