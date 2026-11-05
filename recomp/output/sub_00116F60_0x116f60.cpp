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

// Function: sub_00116F60
// Address: 0x116f60 - 0x117120
void sub_00116F60_0x116f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116F60_0x116f60");
#endif

    switch (ctx->pc) {
        case 0x116fa4u: goto label_116fa4;
        case 0x116fb4u: goto label_116fb4;
        case 0x116fc4u: goto label_116fc4;
        case 0x117024u: goto label_117024;
        case 0x117030u: goto label_117030;
        case 0x117048u: goto label_117048;
        case 0x117058u: goto label_117058;
        case 0x11706cu: goto label_11706c;
        case 0x1170c0u: goto label_1170c0;
        case 0x1170ecu: goto label_1170ec;
        case 0x1170f8u: goto label_1170f8;
        case 0x117108u: goto label_117108;
        default: break;
    }

    ctx->pc = 0x116f60u;

    // 0x116f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x116f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x116f64: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x116f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x116f68: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x116f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x116f6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x116f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x116f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x116f74: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x116f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x116f78: 0x92030023  lbu         $v1, 0x23($s0)
    ctx->pc = 0x116f78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x116f7c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x116F7Cu;
    {
        const bool branch_taken_0x116f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x116f7c) {
            ctx->pc = 0x116F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116F7Cu;
            // 0x116f80: 0x8e11000c  lw          $s1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116F98u;
            goto label_116f98;
        }
    }
    ctx->pc = 0x116F84u;
    // 0x116f84: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x116f84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x116f88: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x116f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x116f8c: 0x5040005f  beql        $v0, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x116F8Cu;
    {
        const bool branch_taken_0x116f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116f8c) {
            ctx->pc = 0x116F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116F8Cu;
            // 0x116f90: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11710Cu;
            goto label_11710c;
        }
    }
    ctx->pc = 0x116F94u;
    // 0x116f94: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x116f94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_116f98:
    // 0x116f98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x116f98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f9c: 0xc0f7da4  jal         func_3DF690
    ctx->pc = 0x116F9Cu;
    SET_GPR_U32(ctx, 31, 0x116FA4u);
    ctx->pc = 0x116FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116F9Cu;
    // 0x116fa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x116F9Cu, 0x116FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116FA4u;
label_116fa4:
    // 0x116fa4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x116FA4u;
    {
        const bool branch_taken_0x116fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116fa4) {
            ctx->pc = 0x116FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116FA4u;
            // 0x116fa8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116FD0u;
            goto label_116fd0;
        }
    }
    ctx->pc = 0x116FACu;
    // 0x116fac: 0xc0f7da0  jal         func_3DF680
    ctx->pc = 0x116FACu;
    SET_GPR_U32(ctx, 31, 0x116FB4u);
    ctx->pc = 0x116FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116FACu;
    // 0x116fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x116FACu, 0x116FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116FB4u;
label_116fb4:
    // 0x116fb4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x116FB4u;
    {
        const bool branch_taken_0x116fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116fb4) {
            ctx->pc = 0x116FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116FB4u;
            // 0x116fb8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116FD0u;
            goto label_116fd0;
        }
    }
    ctx->pc = 0x116FBCu;
    // 0x116fbc: 0xc0f7da8  jal         func_3DF6A0
    ctx->pc = 0x116FBCu;
    SET_GPR_U32(ctx, 31, 0x116FC4u);
    ctx->pc = 0x116FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116FBCu;
    // 0x116fc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x116FBCu, 0x116FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116FC4u;
label_116fc4:
    // 0x116fc4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x116FC4u;
    {
        const bool branch_taken_0x116fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116fc4) {
            ctx->pc = 0x116FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116FC4u;
            // 0x116fc8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116FD4u;
            goto label_116fd4;
        }
    }
    ctx->pc = 0x116FCCu;
    // 0x116fcc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x116fccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_116fd0:
    // 0x116fd0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x116fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_116fd4:
    // 0x116fd4: 0x5242004d  beql        $s2, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x116FD4u;
    {
        const bool branch_taken_0x116fd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x116fd4) {
            ctx->pc = 0x116FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116FD4u;
            // 0x116fd8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11710Cu;
            goto label_11710c;
        }
    }
    ctx->pc = 0x116FDCu;
    // 0x116fdc: 0x12400040  beqz        $s2, . + 4 + (0x40 << 2)
    ctx->pc = 0x116FDCu;
    {
        const bool branch_taken_0x116fdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x116FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116FDCu;
        // 0x116fe0: 0xae120010  sw          $s2, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116fdc) {
            ctx->pc = 0x1170E0u;
            goto label_1170e0;
        }
    }
    ctx->pc = 0x116FE4u;
    // 0x116fe4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x116fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x116fe8: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x116FE8u;
    {
        const bool branch_taken_0x116fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116fe8) {
            ctx->pc = 0x116FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116FE8u;
            // 0x116fec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11710Cu;
            goto label_11710c;
        }
    }
    ctx->pc = 0x116FF0u;
    // 0x116ff0: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x116ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x116ff4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x116ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ff8: 0x24429b10  addiu       $v0, $v0, -0x64F0
    ctx->pc = 0x116ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    // 0x116ffc: 0x9043000c  lbu         $v1, 0xC($v0)
    ctx->pc = 0x116ffcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x499B1Cu));
    // 0x117000: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x117000u;
    {
        const bool branch_taken_0x117000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x117004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117000u;
        // 0x117004: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117000) {
            ctx->pc = 0x117010u;
            goto label_117010;
        }
    }
    ctx->pc = 0x117008u;
    // 0x117008: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x117008u;
    {
        const bool branch_taken_0x117008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117008u;
        // 0x11700c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117008) {
            ctx->pc = 0x117108u;
            goto label_117108;
        }
    }
    ctx->pc = 0x117010u;
label_117010:
    // 0x117010: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x117010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x117014: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x117014u;
    {
        const bool branch_taken_0x117014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117014) {
            ctx->pc = 0x117018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117014u;
            // 0x117018: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11705Cu;
            goto label_11705c;
        }
    }
    ctx->pc = 0x11701Cu;
    // 0x11701c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x11701Cu;
    SET_GPR_U32(ctx, 31, 0x117024u);
    ctx->pc = 0x117020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11701Cu;
    // 0x117020: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x11701Cu, 0x117024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117024u;
label_117024:
    // 0x117024: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x117024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x117028: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x117028u;
    SET_GPR_U32(ctx, 31, 0x117030u);
    ctx->pc = 0x11702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117028u;
    // 0x11702c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x117028u, 0x117030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117030u;
label_117030:
    // 0x117030: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x117030u;
    {
        const bool branch_taken_0x117030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117030u;
        // 0x117034: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117030) {
            ctx->pc = 0x117050u;
            goto label_117050;
        }
    }
    ctx->pc = 0x117038u;
    // 0x117038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11703c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x11703cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x117040: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x117040u;
    SET_GPR_U32(ctx, 31, 0x117048u);
    ctx->pc = 0x117044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117040u;
    // 0x117044: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x117040u, 0x117048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117048u;
label_117048:
    // 0x117048: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x117048u;
    {
        const bool branch_taken_0x117048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117048u;
        // 0x11704c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117048) {
            ctx->pc = 0x11710Cu;
            goto label_11710c;
        }
    }
    ctx->pc = 0x117050u;
label_117050:
    // 0x117050: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x117050u;
    SET_GPR_U32(ctx, 31, 0x117058u);
    ctx->pc = 0x117054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117050u;
    // 0x117054: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x117050u, 0x117058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117058u;
label_117058:
    // 0x117058: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x117058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_11705c:
    // 0x11705c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11705Cu;
    {
        const bool branch_taken_0x11705c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11705c) {
            ctx->pc = 0x117060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11705Cu;
            // 0x117060: 0x92020020  lbu         $v0, 0x20($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117078u;
            goto label_117078;
        }
    }
    ctx->pc = 0x117064u;
    // 0x117064: 0xc045bc4  jal         func_116F10
    ctx->pc = 0x117064u;
    SET_GPR_U32(ctx, 31, 0x11706Cu);
    ctx->pc = 0x117068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117064u;
    // 0x117068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116F10u, 0x117064u, 0x11706Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11706Cu;
label_11706c:
    // 0x11706c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11706cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117070: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x117070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x117074: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x117074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
label_117078:
    // 0x117078: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x117078u;
    {
        const bool branch_taken_0x117078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117078) {
            ctx->pc = 0x11707Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117078u;
            // 0x11707c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11710Cu;
            goto label_11710c;
        }
    }
    ctx->pc = 0x117080u;
    // 0x117080: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x117080u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x117084: 0x92040021  lbu         $a0, 0x21($s0)
    ctx->pc = 0x117084u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x117088: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x117088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11708c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11708cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x117090: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x117090u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x117094: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x117094u;
    {
        const bool branch_taken_0x117094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x117098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117094u;
        // 0x117098: 0xa2020022  sb          $v0, 0x22($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117094) {
            ctx->pc = 0x117108u;
            goto label_117108;
        }
    }
    ctx->pc = 0x11709Cu;
    // 0x11709c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x11709cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1170a0: 0x26249b10  addiu       $a0, $s1, -0x64F0
    ctx->pc = 0x1170a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941456));
    // 0x1170a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1170a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1170a8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1170a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1170ac: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1170acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1170b0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1170b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1170b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1170b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1170b8: 0xc07f5fc  jal         func_1FD7F0
    ctx->pc = 0x1170B8u;
    SET_GPR_U32(ctx, 31, 0x1170C0u);
    ctx->pc = 0x1170BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1170B8u;
    // 0x1170bc: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7F0u, 0x1170B8u, 0x1170C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1170C0u;
label_1170c0:
    // 0x1170c0: 0x92030021  lbu         $v1, 0x21($s0)
    ctx->pc = 0x1170c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x1170c4: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x1170c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1170c8: 0x92040020  lbu         $a0, 0x20($s0)
    ctx->pc = 0x1170c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1170cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1170ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1170d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1170d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1170d4: 0xa2020024  sb          $v0, 0x24($s0)
    ctx->pc = 0x1170d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x1170d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1170D8u;
    {
        const bool branch_taken_0x1170d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170D8u;
        // 0x1170dc: 0xa2030021  sb          $v1, 0x21($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170d8) {
            ctx->pc = 0x117108u;
            goto label_117108;
        }
    }
    ctx->pc = 0x1170E0u;
label_1170e0:
    // 0x1170e0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1170e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1170e4: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1170E4u;
    SET_GPR_U32(ctx, 31, 0x1170ECu);
    ctx->pc = 0x1170E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1170E4u;
    // 0x1170e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1170E4u, 0x1170ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1170ECu;
label_1170ec:
    // 0x1170ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1170ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1170f0: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x1170F0u;
    SET_GPR_U32(ctx, 31, 0x1170F8u);
    ctx->pc = 0x1170F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1170F0u;
    // 0x1170f4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x1170F0u, 0x1170F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1170F8u;
label_1170f8:
    // 0x1170f8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1170f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1170fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1170fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117100: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x117100u;
    SET_GPR_U32(ctx, 31, 0x117108u);
    ctx->pc = 0x117104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117100u;
    // 0x117104: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x117100u, 0x117108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117108u;
label_117108:
    // 0x117108: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x117108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11710c:
    // 0x11710c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11710cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x117110: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117110u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117114: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x117114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x117118: 0x3e00008  jr          $ra
    ctx->pc = 0x117118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117118u;
        // 0x11711c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117120u;
}
