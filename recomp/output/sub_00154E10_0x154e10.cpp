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

// Function: sub_00154E10
// Address: 0x154e10 - 0x155088
void sub_00154E10_0x154e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154E10_0x154e10");
#endif

    switch (ctx->pc) {
        case 0x154e80u: goto label_154e80;
        case 0x154e94u: goto label_154e94;
        case 0x154eb0u: goto label_154eb0;
        case 0x154ec4u: goto label_154ec4;
        case 0x154edcu: goto label_154edc;
        case 0x154f00u: goto label_154f00;
        case 0x154f14u: goto label_154f14;
        case 0x154f28u: goto label_154f28;
        case 0x154f34u: goto label_154f34;
        case 0x154f44u: goto label_154f44;
        case 0x154f50u: goto label_154f50;
        case 0x154f74u: goto label_154f74;
        case 0x154f80u: goto label_154f80;
        case 0x154f8cu: goto label_154f8c;
        case 0x154f98u: goto label_154f98;
        case 0x154fa4u: goto label_154fa4;
        case 0x154fbcu: goto label_154fbc;
        case 0x154fc8u: goto label_154fc8;
        case 0x154fdcu: goto label_154fdc;
        case 0x154ff0u: goto label_154ff0;
        case 0x155000u: goto label_155000;
        case 0x15500cu: goto label_15500c;
        case 0x15501cu: goto label_15501c;
        case 0x155030u: goto label_155030;
        case 0x155044u: goto label_155044;
        case 0x155050u: goto label_155050;
        case 0x15505cu: goto label_15505c;
        default: break;
    }

    ctx->pc = 0x154e10u;

    // 0x154e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x154e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x154e14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x154e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x154e18: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x154e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x154e1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x154e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e20: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x154e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x154e24: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x154e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x154e28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x154e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x154e2c: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x154e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x154e30: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x154e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x154e34: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x154e34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e38: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x154e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x154e3c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x154e3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e40: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x154e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x154e44: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x154e44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x154e48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x154e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x154e4c: 0x9211046c  lbu         $s1, 0x46C($s0)
    ctx->pc = 0x154e4cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x154e50: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x154e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x154e54: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x154e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x154e58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154e5c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x154e5cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154e60: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x154e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x154e64: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x154e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x154e68: 0x12a0000c  beqz        $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x154E68u;
    {
        const bool branch_taken_0x154e68 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E68u;
        // 0x154e6c: 0x8c93020c  lw          $s3, 0x20C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e68) {
            ctx->pc = 0x154E9Cu;
            goto label_154e9c;
        }
    }
    ctx->pc = 0x154E70u;
    // 0x154e70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x154e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x154e74: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x154e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x154e78: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x154E78u;
    SET_GPR_U32(ctx, 31, 0x154E80u);
    ctx->pc = 0x154E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154E78u;
    // 0x154e7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x154E78u, 0x154E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E80u;
label_154e80:
    // 0x154e80: 0x8e060660  lw          $a2, 0x660($s0)
    ctx->pc = 0x154e80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x154e84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e88: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x154e88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e8c: 0xc04de46  jal         func_137918
    ctx->pc = 0x154E8Cu;
    SET_GPR_U32(ctx, 31, 0x154E94u);
    ctx->pc = 0x154E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154E8Cu;
    // 0x154e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137918u, 0x154E8Cu, 0x154E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E94u;
label_154e94:
    // 0x154e94: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x154E94u;
    {
        const bool branch_taken_0x154e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E94u;
        // 0x154e98: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e94) {
            ctx->pc = 0x154EECu;
            goto label_154eec;
        }
    }
    ctx->pc = 0x154E9Cu;
label_154e9c:
    // 0x154e9c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x154e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x154ea0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x154ea0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x154ea4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x154ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x154ea8: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x154EA8u;
    SET_GPR_U32(ctx, 31, 0x154EB0u);
    ctx->pc = 0x154EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154EA8u;
    // 0x154eac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x154EA8u, 0x154EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154EB0u;
label_154eb0:
    // 0x154eb0: 0x8e060660  lw          $a2, 0x660($s0)
    ctx->pc = 0x154eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x154eb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154eb8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x154eb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ebc: 0xc04dda6  jal         func_137698
    ctx->pc = 0x154EBCu;
    SET_GPR_U32(ctx, 31, 0x154EC4u);
    ctx->pc = 0x154EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154EBCu;
    // 0x154ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137698u, 0x154EBCu, 0x154EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154EC4u;
label_154ec4:
    // 0x154ec4: 0x8e030660  lw          $v1, 0x660($s0)
    ctx->pc = 0x154ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x154ec8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x154ec8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ecc: 0x56430008  bnel        $s2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x154ECCu;
    {
        const bool branch_taken_0x154ecc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x154ecc) {
            ctx->pc = 0x154ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154ECCu;
            // 0x154ed0: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154EF0u;
            goto label_154ef0;
        }
    }
    ctx->pc = 0x154ED4u;
    // 0x154ed4: 0xc0414a2  jal         func_105288
    ctx->pc = 0x154ED4u;
    SET_GPR_U32(ctx, 31, 0x154EDCu);
    ctx->pc = 0x154ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154ED4u;
    // 0x154ed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x154ED4u, 0x154EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154EDCu;
label_154edc:
    // 0x154edc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x154EDCu;
    {
        const bool branch_taken_0x154edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154edc) {
            ctx->pc = 0x154EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154EDCu;
            // 0x154ee0: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154EF0u;
            goto label_154ef0;
        }
    }
    ctx->pc = 0x154EE4u;
    // 0x154ee4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x154ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x154ee8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x154ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_154eec:
    // 0x154eec: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x154eecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_154ef0:
    // 0x154ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ef4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x154ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ef8: 0xc04e16a  jal         func_1385A8
    ctx->pc = 0x154EF8u;
    SET_GPR_U32(ctx, 31, 0x154F00u);
    ctx->pc = 0x154EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154EF8u;
    // 0x154efc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1385A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A8u, 0x154EF8u, 0x154F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F00u;
label_154f00:
    // 0x154f00: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x154F00u;
    {
        const bool branch_taken_0x154f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154f00) {
            ctx->pc = 0x154F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154F00u;
            // 0x154f04: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154F1Cu;
            goto label_154f1c;
        }
    }
    ctx->pc = 0x154F08u;
    // 0x154f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f0c: 0xc04da5c  jal         func_136970
    ctx->pc = 0x154F0Cu;
    SET_GPR_U32(ctx, 31, 0x154F14u);
    ctx->pc = 0x154F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F0Cu;
    // 0x154f10: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136970u, 0x154F0Cu, 0x154F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F14u;
label_154f14:
    // 0x154f14: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x154F14u;
    {
        const bool branch_taken_0x154f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F14u;
        // 0x154f18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f14) {
            ctx->pc = 0x155060u;
            goto label_155060;
        }
    }
    ctx->pc = 0x154F1Cu;
label_154f1c:
    // 0x154f1c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x154f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154f20: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x154F20u;
    SET_GPR_U32(ctx, 31, 0x154F28u);
    ctx->pc = 0x154F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F20u;
    // 0x154f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x154F20u, 0x154F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F28u;
label_154f28:
    // 0x154f28: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x154f28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x154f2c: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x154F2Cu;
    SET_GPR_U32(ctx, 31, 0x154F34u);
    ctx->pc = 0x154F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F2Cu;
    // 0x154f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x154F2Cu, 0x154F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F34u;
label_154f34:
    // 0x154f34: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x154f34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x154f38: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x154f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154f3c: 0xc0551e4  jal         func_154790
    ctx->pc = 0x154F3Cu;
    SET_GPR_U32(ctx, 31, 0x154F44u);
    ctx->pc = 0x154F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F3Cu;
    // 0x154f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154790u, 0x154F3Cu, 0x154F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F44u;
label_154f44:
    // 0x154f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f48: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x154F48u;
    SET_GPR_U32(ctx, 31, 0x154F50u);
    ctx->pc = 0x154F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F48u;
    // 0x154f4c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x154F48u, 0x154F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F50u;
label_154f50:
    // 0x154f50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x154f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f54: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x154f54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154f58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x154f58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f5c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x154f5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f60: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x154f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x154f64: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x154f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f6c: 0xc04daca  jal         func_136B28
    ctx->pc = 0x154F6Cu;
    SET_GPR_U32(ctx, 31, 0x154F74u);
    ctx->pc = 0x154F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F6Cu;
    // 0x154f70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x154F6Cu, 0x154F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F74u;
label_154f74:
    // 0x154f74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x154f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f78: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x154F78u;
    SET_GPR_U32(ctx, 31, 0x154F80u);
    ctx->pc = 0x154F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F78u;
    // 0x154f7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x154F78u, 0x154F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F80u;
label_154f80:
    // 0x154f80: 0x8e050668  lw          $a1, 0x668($s0)
    ctx->pc = 0x154f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1640)));
    // 0x154f84: 0xc046104  jal         func_118410
    ctx->pc = 0x154F84u;
    SET_GPR_U32(ctx, 31, 0x154F8Cu);
    ctx->pc = 0x154F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F84u;
    // 0x154f88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x154F84u, 0x154F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F8Cu;
label_154f8c:
    // 0x154f8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x154f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f90: 0xc046290  jal         func_118A40
    ctx->pc = 0x154F90u;
    SET_GPR_U32(ctx, 31, 0x154F98u);
    ctx->pc = 0x154F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F90u;
    // 0x154f94: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x154F90u, 0x154F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F98u;
label_154f98:
    // 0x154f98: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x154f98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x154f9c: 0xc04d930  jal         func_1364C0
    ctx->pc = 0x154F9Cu;
    SET_GPR_U32(ctx, 31, 0x154FA4u);
    ctx->pc = 0x154FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F9Cu;
    // 0x154fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1364C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364C0u, 0x154F9Cu, 0x154FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FA4u;
label_154fa4:
    // 0x154fa4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x154FA4u;
    {
        const bool branch_taken_0x154fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154fa4) {
            ctx->pc = 0x154FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154FA4u;
            // 0x154fa8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154FC0u;
            goto label_154fc0;
        }
    }
    ctx->pc = 0x154FACu;
    // 0x154fac: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x154facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x154fb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x154fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x154fb4: 0xc046290  jal         func_118A40
    ctx->pc = 0x154FB4u;
    SET_GPR_U32(ctx, 31, 0x154FBCu);
    ctx->pc = 0x154FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154FB4u;
    // 0x154fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x154FB4u, 0x154FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FBCu;
label_154fbc:
    // 0x154fbc: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x154fbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_154fc0:
    // 0x154fc0: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x154FC0u;
    SET_GPR_U32(ctx, 31, 0x154FC8u);
    ctx->pc = 0x154FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154FC0u;
    // 0x154fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x154FC0u, 0x154FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FC8u;
label_154fc8:
    // 0x154fc8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x154fc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154fcc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x154fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154fd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x154fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154fd4: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x154FD4u;
    SET_GPR_U32(ctx, 31, 0x154FDCu);
    ctx->pc = 0x154FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154FD4u;
    // 0x154fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x154FD4u, 0x154FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FDCu;
label_154fdc:
    // 0x154fdc: 0x8e020680  lw          $v0, 0x680($s0)
    ctx->pc = 0x154fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
    // 0x154fe0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x154FE0u;
    {
        const bool branch_taken_0x154fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FE0u;
        // 0x154fe4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fe0) {
            ctx->pc = 0x154FF8u;
            goto label_154ff8;
        }
    }
    ctx->pc = 0x154FE8u;
    // 0x154fe8: 0xc043c56  jal         func_10F158
    ctx->pc = 0x154FE8u;
    SET_GPR_U32(ctx, 31, 0x154FF0u);
    ctx->pc = 0x154FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154FE8u;
    // 0x154fec: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x154FE8u, 0x154FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FF0u;
label_154ff0:
    // 0x154ff0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x154FF0u;
    {
        const bool branch_taken_0x154ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FF0u;
        // 0x154ff4: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ff0) {
            ctx->pc = 0x155004u;
            goto label_155004;
        }
    }
    ctx->pc = 0x154FF8u;
label_154ff8:
    // 0x154ff8: 0xc043c56  jal         func_10F158
    ctx->pc = 0x154FF8u;
    SET_GPR_U32(ctx, 31, 0x155000u);
    ctx->pc = 0x154FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154FF8u;
    // 0x154ffc: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x154FF8u, 0x155000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155000u;
label_155000:
    // 0x155000: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x155000u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_155004:
    // 0x155004: 0xc04d9a2  jal         func_136688
    ctx->pc = 0x155004u;
    SET_GPR_U32(ctx, 31, 0x15500Cu);
    ctx->pc = 0x155008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155004u;
    // 0x155008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136688u, 0x155004u, 0x15500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15500Cu;
label_15500c:
    // 0x15500c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x15500cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x155010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155014: 0xc04d9e4  jal         func_136790
    ctx->pc = 0x155014u;
    SET_GPR_U32(ctx, 31, 0x15501Cu);
    ctx->pc = 0x155018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155014u;
    // 0x155018: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136790u, 0x155014u, 0x15501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15501Cu;
label_15501c:
    // 0x15501c: 0x52c00010  beql        $s6, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x15501Cu;
    {
        const bool branch_taken_0x15501c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x15501c) {
            ctx->pc = 0x155020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15501Cu;
            // 0x155020: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155060u;
            goto label_155060;
        }
    }
    ctx->pc = 0x155024u;
    // 0x155024: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x155024u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x155028: 0xc04e0c0  jal         func_138300
    ctx->pc = 0x155028u;
    SET_GPR_U32(ctx, 31, 0x155030u);
    ctx->pc = 0x15502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155028u;
    // 0x15502c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138300u, 0x155028u, 0x155030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155030u;
label_155030:
    // 0x155030: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x155030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x155034: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x155034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155038: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x155038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15503c: 0xc045498  jal         func_115260
    ctx->pc = 0x15503Cu;
    SET_GPR_U32(ctx, 31, 0x155044u);
    ctx->pc = 0x155040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15503Cu;
    // 0x155040: 0xae0204c8  sw          $v0, 0x4C8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115260u, 0x15503Cu, 0x155044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155044u;
label_155044:
    // 0x155044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155048: 0xc04d7dc  jal         func_135F70
    ctx->pc = 0x155048u;
    SET_GPR_U32(ctx, 31, 0x155050u);
    ctx->pc = 0x15504Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155048u;
    // 0x15504c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F70u, 0x155048u, 0x155050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155050u;
label_155050:
    // 0x155050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155054: 0xc04e046  jal         func_138118
    ctx->pc = 0x155054u;
    SET_GPR_U32(ctx, 31, 0x15505Cu);
    ctx->pc = 0x155058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155054u;
    // 0x155058: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138118u, 0x155054u, 0x15505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15505Cu;
label_15505c:
    // 0x15505c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15505cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155060:
    // 0x155060: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155064: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x155064u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155068: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x155068u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15506c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x15506cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155070: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x155070u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x155074: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x155074u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155078: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x155078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15507c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x15507cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x155080: 0x3e00008  jr          $ra
    ctx->pc = 0x155080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155080u;
        // 0x155084: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155088u;
}
