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

// Function: sub_00227F28
// Address: 0x227f28 - 0x228020
void sub_00227F28_0x227f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227F28_0x227f28");
#endif

    switch (ctx->pc) {
        case 0x227f28u: goto label_227f28;
        case 0x227f2cu: goto label_227f2c;
        case 0x227f30u: goto label_227f30;
        case 0x227f34u: goto label_227f34;
        case 0x227f38u: goto label_227f38;
        case 0x227f3cu: goto label_227f3c;
        case 0x227f40u: goto label_227f40;
        case 0x227f44u: goto label_227f44;
        case 0x227f48u: goto label_227f48;
        case 0x227f4cu: goto label_227f4c;
        case 0x227f50u: goto label_227f50;
        case 0x227f54u: goto label_227f54;
        case 0x227f58u: goto label_227f58;
        case 0x227f5cu: goto label_227f5c;
        case 0x227f60u: goto label_227f60;
        case 0x227f64u: goto label_227f64;
        case 0x227f68u: goto label_227f68;
        case 0x227f6cu: goto label_227f6c;
        case 0x227f70u: goto label_227f70;
        case 0x227f74u: goto label_227f74;
        case 0x227f78u: goto label_227f78;
        case 0x227f7cu: goto label_227f7c;
        case 0x227f80u: goto label_227f80;
        case 0x227f84u: goto label_227f84;
        case 0x227f88u: goto label_227f88;
        case 0x227f8cu: goto label_227f8c;
        case 0x227f90u: goto label_227f90;
        case 0x227f94u: goto label_227f94;
        case 0x227f98u: goto label_227f98;
        case 0x227f9cu: goto label_227f9c;
        case 0x227fa0u: goto label_227fa0;
        case 0x227fa4u: goto label_227fa4;
        case 0x227fa8u: goto label_227fa8;
        case 0x227facu: goto label_227fac;
        case 0x227fb0u: goto label_227fb0;
        case 0x227fb4u: goto label_227fb4;
        case 0x227fb8u: goto label_227fb8;
        case 0x227fbcu: goto label_227fbc;
        case 0x227fc0u: goto label_227fc0;
        case 0x227fc4u: goto label_227fc4;
        case 0x227fc8u: goto label_227fc8;
        case 0x227fccu: goto label_227fcc;
        case 0x227fd0u: goto label_227fd0;
        case 0x227fd4u: goto label_227fd4;
        case 0x227fd8u: goto label_227fd8;
        case 0x227fdcu: goto label_227fdc;
        case 0x227fe0u: goto label_227fe0;
        case 0x227fe4u: goto label_227fe4;
        case 0x227fe8u: goto label_227fe8;
        case 0x227fecu: goto label_227fec;
        case 0x227ff0u: goto label_227ff0;
        case 0x227ff4u: goto label_227ff4;
        case 0x227ff8u: goto label_227ff8;
        case 0x227ffcu: goto label_227ffc;
        case 0x228000u: goto label_228000;
        case 0x228004u: goto label_228004;
        case 0x228008u: goto label_228008;
        case 0x22800cu: goto label_22800c;
        case 0x228010u: goto label_228010;
        case 0x228014u: goto label_228014;
        case 0x228018u: goto label_228018;
        case 0x22801cu: goto label_22801c;
        default: break;
    }

    ctx->pc = 0x227f28u;

label_227f28:
    // 0x227f28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x227f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_227f2c:
    // 0x227f2c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x227f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_227f30:
    // 0x227f30: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x227f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_227f34:
    // 0x227f34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_227f38:
    // 0x227f38: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x227f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_227f3c:
    // 0x227f3c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x227f3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_227f40:
    // 0x227f40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x227f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_227f44:
    // 0x227f44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x227f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_227f48:
    // 0x227f48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x227f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_227f4c:
    // 0x227f4c: 0xc0d7424  jal         func_35D090
label_227f50:
    if (ctx->pc == 0x227F50u) {
        ctx->pc = 0x227F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F4Cu;
        // 0x227f50: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227F54u;
        goto label_227f54;
    }
    ctx->pc = 0x227F4Cu;
    SET_GPR_U32(ctx, 31, 0x227F54u);
    ctx->pc = 0x227F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227F4Cu;
    // 0x227f50: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x227F4Cu, 0x227F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227F54u;
label_227f54:
    // 0x227f54: 0x8e04032c  lw          $a0, 0x32C($s0)
    ctx->pc = 0x227f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
label_227f58:
    // 0x227f58: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x227f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_227f5c:
    // 0x227f5c: 0xc0d73cc  jal         func_35CF30
label_227f60:
    if (ctx->pc == 0x227F60u) {
        ctx->pc = 0x227F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F5Cu;
        // 0x227f60: 0x248400f8  addiu       $a0, $a0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227F64u;
        goto label_227f64;
    }
    ctx->pc = 0x227F5Cu;
    SET_GPR_U32(ctx, 31, 0x227F64u);
    ctx->pc = 0x227F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227F5Cu;
    // 0x227f60: 0x248400f8  addiu       $a0, $a0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x227F5Cu, 0x227F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227F64u;
label_227f64:
    // 0x227f64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x227f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_227f68:
    // 0x227f68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_227f6c:
    if (ctx->pc == 0x227F6Cu) {
        ctx->pc = 0x227F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F68u;
        // 0x227f6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227F70u;
        goto label_227f70;
    }
    ctx->pc = 0x227F68u;
    {
        const bool branch_taken_0x227f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F68u;
        // 0x227f6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f68) {
            ctx->pc = 0x227F80u;
            goto label_227f80;
        }
    }
    ctx->pc = 0x227F70u;
label_227f70:
    // 0x227f70: 0xc0d7412  jal         func_35D048
label_227f74:
    if (ctx->pc == 0x227F74u) {
        ctx->pc = 0x227F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F70u;
        // 0x227f74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227F78u;
        goto label_227f78;
    }
    ctx->pc = 0x227F70u;
    SET_GPR_U32(ctx, 31, 0x227F78u);
    ctx->pc = 0x227F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227F70u;
    // 0x227f74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x227F70u, 0x227F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227F78u;
label_227f78:
    // 0x227f78: 0x10000022  b           . + 4 + (0x22 << 2)
label_227f7c:
    if (ctx->pc == 0x227F7Cu) {
        ctx->pc = 0x227F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F78u;
        // 0x227f7c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227F80u;
        goto label_227f80;
    }
    ctx->pc = 0x227F78u;
    {
        const bool branch_taken_0x227f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F78u;
        // 0x227f7c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f78) {
            ctx->pc = 0x228004u;
            goto label_228004;
        }
    }
    ctx->pc = 0x227F80u;
label_227f80:
    // 0x227f80: 0x8e04032c  lw          $a0, 0x32C($s0)
    ctx->pc = 0x227f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
label_227f84:
    // 0x227f84: 0xc0844c0  jal         func_211300
label_227f88:
    if (ctx->pc == 0x227F88u) {
        ctx->pc = 0x227F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F84u;
        // 0x227f88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227F8Cu;
        goto label_227f8c;
    }
    ctx->pc = 0x227F84u;
    SET_GPR_U32(ctx, 31, 0x227F8Cu);
    ctx->pc = 0x227F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227F84u;
    // 0x227f88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211300u, 0x227F84u, 0x227F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227F8Cu;
label_227f8c:
    // 0x227f8c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_227f90:
    if (ctx->pc == 0x227F90u) {
        ctx->pc = 0x227F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F8Cu;
        // 0x227f90: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227F94u;
        goto label_227f94;
    }
    ctx->pc = 0x227F8Cu;
    {
        const bool branch_taken_0x227f8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x227F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F8Cu;
        // 0x227f90: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f8c) {
            ctx->pc = 0x227FB0u;
            goto label_227fb0;
        }
    }
    ctx->pc = 0x227F94u;
label_227f94:
    // 0x227f94: 0x8e04032c  lw          $a0, 0x32C($s0)
    ctx->pc = 0x227f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
label_227f98:
    // 0x227f98: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_227f9c:
    if (ctx->pc == 0x227F9Cu) {
        ctx->pc = 0x227FA0u;
        goto label_227fa0;
    }
    ctx->pc = 0x227F98u;
    {
        const bool branch_taken_0x227f98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x227f98) {
            ctx->pc = 0x227FB0u;
            goto label_227fb0;
        }
    }
    ctx->pc = 0x227FA0u;
label_227fa0:
    // 0x227fa0: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x227fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_227fa4:
    // 0x227fa4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x227fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_227fa8:
    // 0x227fa8: 0x40f809  jalr        $v0
label_227fac:
    if (ctx->pc == 0x227FACu) {
        ctx->pc = 0x227FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FA8u;
        // 0x227fac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227FB0u;
        goto label_227fb0;
    }
    ctx->pc = 0x227FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227FB0u);
        ctx->pc = 0x227FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FA8u;
        // 0x227fac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227FA8u, 0x227FB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227FB0u;
label_227fb0:
    // 0x227fb0: 0xc085d2a  jal         func_2174A8
label_227fb4:
    if (ctx->pc == 0x227FB4u) {
        ctx->pc = 0x227FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FB0u;
        // 0x227fb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227FB8u;
        goto label_227fb8;
    }
    ctx->pc = 0x227FB0u;
    SET_GPR_U32(ctx, 31, 0x227FB8u);
    ctx->pc = 0x227FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227FB0u;
    // 0x227fb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x227FB0u, 0x227FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FB8u;
label_227fb8:
    // 0x227fb8: 0xc083072  jal         func_20C1C8
label_227fbc:
    if (ctx->pc == 0x227FBCu) {
        ctx->pc = 0x227FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FB8u;
        // 0x227fbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227FC0u;
        goto label_227fc0;
    }
    ctx->pc = 0x227FB8u;
    SET_GPR_U32(ctx, 31, 0x227FC0u);
    ctx->pc = 0x227FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227FB8u;
    // 0x227fbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x227FB8u, 0x227FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FC0u;
label_227fc0:
    // 0x227fc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x227fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_227fc4:
    // 0x227fc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x227fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227fc8:
    // 0x227fc8: 0xc0966b4  jal         func_259AD0
label_227fcc:
    if (ctx->pc == 0x227FCCu) {
        ctx->pc = 0x227FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FC8u;
        // 0x227fcc: 0xae02032c  sw          $v0, 0x32C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227FD0u;
        goto label_227fd0;
    }
    ctx->pc = 0x227FC8u;
    SET_GPR_U32(ctx, 31, 0x227FD0u);
    ctx->pc = 0x227FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227FC8u;
    // 0x227fcc: 0xae02032c  sw          $v0, 0x32C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259AD0u, 0x227FC8u, 0x227FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FD0u;
label_227fd0:
    // 0x227fd0: 0xc08442a  jal         func_2110A8
label_227fd4:
    if (ctx->pc == 0x227FD4u) {
        ctx->pc = 0x227FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FD0u;
        // 0x227fd4: 0x8e04032c  lw          $a0, 0x32C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227FD8u;
        goto label_227fd8;
    }
    ctx->pc = 0x227FD0u;
    SET_GPR_U32(ctx, 31, 0x227FD8u);
    ctx->pc = 0x227FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227FD0u;
    // 0x227fd4: 0x8e04032c  lw          $a0, 0x32C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2110A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2110A8u, 0x227FD0u, 0x227FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FD8u;
label_227fd8:
    // 0x227fd8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_227fdc:
    if (ctx->pc == 0x227FDCu) {
        ctx->pc = 0x227FE0u;
        goto label_227fe0;
    }
    ctx->pc = 0x227FD8u;
    {
        const bool branch_taken_0x227fd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x227fd8) {
            ctx->pc = 0x227FECu;
            goto label_227fec;
        }
    }
    ctx->pc = 0x227FE0u;
label_227fe0:
    // 0x227fe0: 0x8e04032c  lw          $a0, 0x32C($s0)
    ctx->pc = 0x227fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
label_227fe4:
    // 0x227fe4: 0xc084492  jal         func_211248
label_227fe8:
    if (ctx->pc == 0x227FE8u) {
        ctx->pc = 0x227FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FE4u;
        // 0x227fe8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227FECu;
        goto label_227fec;
    }
    ctx->pc = 0x227FE4u;
    SET_GPR_U32(ctx, 31, 0x227FECu);
    ctx->pc = 0x227FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227FE4u;
    // 0x227fe8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211248u, 0x227FE4u, 0x227FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FECu;
label_227fec:
    // 0x227fec: 0xc0857b4  jal         func_215ED0
label_227ff0:
    if (ctx->pc == 0x227FF0u) {
        ctx->pc = 0x227FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FECu;
        // 0x227ff0: 0x8e04032c  lw          $a0, 0x32C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227FF4u;
        goto label_227ff4;
    }
    ctx->pc = 0x227FECu;
    SET_GPR_U32(ctx, 31, 0x227FF4u);
    ctx->pc = 0x227FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227FECu;
    // 0x227ff0: 0x8e04032c  lw          $a0, 0x32C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215ED0u, 0x227FECu, 0x227FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FF4u;
label_227ff4:
    // 0x227ff4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x227ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_227ff8:
    // 0x227ff8: 0xc0d7412  jal         func_35D048
label_227ffc:
    if (ctx->pc == 0x227FFCu) {
        ctx->pc = 0x227FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FF8u;
        // 0x227ffc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228000u;
        goto label_228000;
    }
    ctx->pc = 0x227FF8u;
    SET_GPR_U32(ctx, 31, 0x228000u);
    ctx->pc = 0x227FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227FF8u;
    // 0x227ffc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x227FF8u, 0x228000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228000u;
label_228000:
    // 0x228000: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x228000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_228004:
    // 0x228004: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x228004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_228008:
    // 0x228008: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x228008u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22800c:
    // 0x22800c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x22800cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_228010:
    // 0x228010: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x228010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_228014:
    // 0x228014: 0x3e00008  jr          $ra
label_228018:
    if (ctx->pc == 0x228018u) {
        ctx->pc = 0x228018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228014u;
        // 0x228018: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22801Cu;
        goto label_22801c;
    }
    ctx->pc = 0x228014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228014u;
        // 0x228018: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22801Cu;
label_22801c:
    // 0x22801c: 0x0  nop
    ctx->pc = 0x22801cu;
    // NOP
    ctx->pc = 0x228020u;
}
