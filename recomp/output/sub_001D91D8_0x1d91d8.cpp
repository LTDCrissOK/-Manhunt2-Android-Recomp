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

// Function: sub_001D91D8
// Address: 0x1d91d8 - 0x1d9420
void sub_001D91D8_0x1d91d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D91D8_0x1d91d8");
#endif

    switch (ctx->pc) {
        case 0x1d9210u: goto label_1d9210;
        case 0x1d9238u: goto label_1d9238;
        case 0x1d9258u: goto label_1d9258;
        case 0x1d9260u: goto label_1d9260;
        case 0x1d92a0u: goto label_1d92a0;
        case 0x1d92c0u: goto label_1d92c0;
        case 0x1d92e8u: goto label_1d92e8;
        case 0x1d9308u: goto label_1d9308;
        case 0x1d931cu: goto label_1d931c;
        case 0x1d9324u: goto label_1d9324;
        case 0x1d9368u: goto label_1d9368;
        case 0x1d9388u: goto label_1d9388;
        case 0x1d9390u: goto label_1d9390;
        case 0x1d939cu: goto label_1d939c;
        case 0x1d93d8u: goto label_1d93d8;
        case 0x1d93f8u: goto label_1d93f8;
        case 0x1d9400u: goto label_1d9400;
        default: break;
    }

    ctx->pc = 0x1d91d8u;

    // 0x1d91d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d91d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d91dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d91dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d91e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d91e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d91e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d91e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d91e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d91e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d91ec: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1d91ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1d91f0: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x1d91f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d91f4: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D91F4u;
    {
        const bool branch_taken_0x1d91f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d91f4) {
            ctx->pc = 0x1D91F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D91F4u;
            // 0x1d91f8: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9270u;
            goto label_1d9270;
        }
    }
    ctx->pc = 0x1D91FCu;
    // 0x1d91fc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1d91fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d9200: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9200u;
    {
        const bool branch_taken_0x1d9200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9200) {
            ctx->pc = 0x1D9204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9200u;
            // 0x1d9204: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9214u;
            goto label_1d9214;
        }
    }
    ctx->pc = 0x1D9208u;
    // 0x1d9208: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D9208u;
    SET_GPR_U32(ctx, 31, 0x1D9210u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D9208u, 0x1D9210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9210u;
label_1d9210:
    // 0x1d9210: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1d9210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d9214:
    // 0x1d9214: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D9214u;
    {
        const bool branch_taken_0x1d9214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9214u;
        // 0x1d9218: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9214) {
            ctx->pc = 0x1D9258u;
            goto label_1d9258;
        }
    }
    ctx->pc = 0x1D921Cu;
    // 0x1d921c: 0x8c83fff0  lw          $v1, -0x10($a0)
    ctx->pc = 0x1d921cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x1d9220: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x1d9220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d9224: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1d9224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d9228: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D9228u;
    {
        const bool branch_taken_0x1d9228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9228u;
        // 0x1d922c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9228) {
            ctx->pc = 0x1D9250u;
            goto label_1d9250;
        }
    }
    ctx->pc = 0x1D9230u;
    // 0x1d9230: 0x2442ffb0  addiu       $v0, $v0, -0x50
    ctx->pc = 0x1d9230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    // 0x1d9234: 0x0  nop
    ctx->pc = 0x1d9234u;
    // NOP
label_1d9238:
    // 0x1d9238: 0x0  nop
    ctx->pc = 0x1d9238u;
    // NOP
    // 0x1d923c: 0x0  nop
    ctx->pc = 0x1d923cu;
    // NOP
    // 0x1d9240: 0x0  nop
    ctx->pc = 0x1d9240u;
    // NOP
    // 0x1d9244: 0x0  nop
    ctx->pc = 0x1d9244u;
    // NOP
    // 0x1d9248: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D9248u;
    {
        const bool branch_taken_0x1d9248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9248u;
        // 0x1d924c: 0x2442ffb0  addiu       $v0, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9248) {
            ctx->pc = 0x1D9238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9238;
        }
    }
    ctx->pc = 0x1D9250u;
label_1d9250:
    // 0x1d9250: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D9250u;
    SET_GPR_U32(ctx, 31, 0x1D9258u);
    ctx->pc = 0x1D9254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9250u;
    // 0x1d9254: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D9250u, 0x1D9258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9258u;
label_1d9258:
    // 0x1d9258: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1D9258u;
    SET_GPR_U32(ctx, 31, 0x1D9260u);
    ctx->pc = 0x1D925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9258u;
    // 0x1d925c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D9258u, 0x1D9260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9260u;
label_1d9260:
    // 0x1d9260: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1d9260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1d9264: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1d9264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1d9268: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1d9268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1d926c: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x1d926cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1d9270:
    // 0x1d9270: 0x5200002f  beql        $s0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x1D9270u;
    {
        const bool branch_taken_0x1d9270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9270) {
            ctx->pc = 0x1D9274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9270u;
            // 0x1d9274: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9330u;
            goto label_1d9330;
        }
    }
    ctx->pc = 0x1D9278u;
    // 0x1d9278: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1d9278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d927c: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D927Cu;
    {
        const bool branch_taken_0x1d927c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D927Cu;
        // 0x1d9280: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d927c) {
            ctx->pc = 0x1D92C0u;
            goto label_1d92c0;
        }
    }
    ctx->pc = 0x1D9284u;
    // 0x1d9284: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x1d9284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x1d9288: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d9288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d928c: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x1d928cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d9290: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x1d9290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1d9294: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9294u;
    {
        const bool branch_taken_0x1d9294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9294u;
        // 0x1d9298: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9294) {
            ctx->pc = 0x1D92B8u;
            goto label_1d92b8;
        }
    }
    ctx->pc = 0x1D929Cu;
    // 0x1d929c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1d929cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_1d92a0:
    // 0x1d92a0: 0x0  nop
    ctx->pc = 0x1d92a0u;
    // NOP
    // 0x1d92a4: 0x0  nop
    ctx->pc = 0x1d92a4u;
    // NOP
    // 0x1d92a8: 0x0  nop
    ctx->pc = 0x1d92a8u;
    // NOP
    // 0x1d92ac: 0x0  nop
    ctx->pc = 0x1d92acu;
    // NOP
    // 0x1d92b0: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D92B0u;
    {
        const bool branch_taken_0x1d92b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D92B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92B0u;
        // 0x1d92b4: 0x2442ffd0  addiu       $v0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d92b0) {
            ctx->pc = 0x1D92A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d92a0;
        }
    }
    ctx->pc = 0x1D92B8u;
label_1d92b8:
    // 0x1d92b8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D92B8u;
    SET_GPR_U32(ctx, 31, 0x1D92C0u);
    ctx->pc = 0x1D92BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D92B8u;
    // 0x1d92bc: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D92B8u, 0x1D92C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D92C0u;
label_1d92c0:
    // 0x1d92c0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1d92c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d92c4: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D92C4u;
    {
        const bool branch_taken_0x1d92c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d92c4) {
            ctx->pc = 0x1D92C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D92C4u;
            // 0x1d92c8: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D930Cu;
            goto label_1d930c;
        }
    }
    ctx->pc = 0x1D92CCu;
    // 0x1d92cc: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x1d92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x1d92d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d92d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d92d8: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D92D8u;
    {
        const bool branch_taken_0x1d92d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92D8u;
        // 0x1d92dc: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d92d8) {
            ctx->pc = 0x1D9300u;
            goto label_1d9300;
        }
    }
    ctx->pc = 0x1D92E0u;
    // 0x1d92e0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1d92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1d92e4: 0x0  nop
    ctx->pc = 0x1d92e4u;
    // NOP
label_1d92e8:
    // 0x1d92e8: 0x0  nop
    ctx->pc = 0x1d92e8u;
    // NOP
    // 0x1d92ec: 0x0  nop
    ctx->pc = 0x1d92ecu;
    // NOP
    // 0x1d92f0: 0x0  nop
    ctx->pc = 0x1d92f0u;
    // NOP
    // 0x1d92f4: 0x0  nop
    ctx->pc = 0x1d92f4u;
    // NOP
    // 0x1d92f8: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D92F8u;
    {
        const bool branch_taken_0x1d92f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92F8u;
        // 0x1d92fc: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d92f8) {
            ctx->pc = 0x1D92E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d92e8;
        }
    }
    ctx->pc = 0x1D9300u;
label_1d9300:
    // 0x1d9300: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D9300u;
    SET_GPR_U32(ctx, 31, 0x1D9308u);
    ctx->pc = 0x1D9304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9300u;
    // 0x1d9304: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D9300u, 0x1D9308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9308u;
label_1d9308:
    // 0x1d9308: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1d9308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1d930c:
    // 0x1d930c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D930Cu;
    {
        const bool branch_taken_0x1d930c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d930c) {
            ctx->pc = 0x1D931Cu;
            goto label_1d931c;
        }
    }
    ctx->pc = 0x1D9314u;
    // 0x1d9314: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D9314u;
    SET_GPR_U32(ctx, 31, 0x1D931Cu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D9314u, 0x1D931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D931Cu;
label_1d931c:
    // 0x1d931c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1D931Cu;
    SET_GPR_U32(ctx, 31, 0x1D9324u);
    ctx->pc = 0x1D9320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D931Cu;
    // 0x1d9320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D931Cu, 0x1D9324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9324u;
label_1d9324:
    // 0x1d9324: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1d9324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1d9328: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1d9328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1d932c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1d932cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1d9330:
    // 0x1d9330: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x1d9330u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d9334: 0x5200001a  beql        $s0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D9334u;
    {
        const bool branch_taken_0x1d9334 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9334) {
            ctx->pc = 0x1D9338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9334u;
            // 0x1d9338: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D93A0u;
            goto label_1d93a0;
        }
    }
    ctx->pc = 0x1D933Cu;
    // 0x1d933c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1d933cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d9340: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D9340u;
    {
        const bool branch_taken_0x1d9340 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9340u;
        // 0x1d9344: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9340) {
            ctx->pc = 0x1D9388u;
            goto label_1d9388;
        }
    }
    ctx->pc = 0x1D9348u;
    // 0x1d9348: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x1d9348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x1d934c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d934cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9350: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x1d9350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d9354: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x1d9354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1d9358: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D9358u;
    {
        const bool branch_taken_0x1d9358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9358u;
        // 0x1d935c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9358) {
            ctx->pc = 0x1D9380u;
            goto label_1d9380;
        }
    }
    ctx->pc = 0x1D9360u;
    // 0x1d9360: 0x2442ffa0  addiu       $v0, $v0, -0x60
    ctx->pc = 0x1d9360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
    // 0x1d9364: 0x0  nop
    ctx->pc = 0x1d9364u;
    // NOP
label_1d9368:
    // 0x1d9368: 0x0  nop
    ctx->pc = 0x1d9368u;
    // NOP
    // 0x1d936c: 0x0  nop
    ctx->pc = 0x1d936cu;
    // NOP
    // 0x1d9370: 0x0  nop
    ctx->pc = 0x1d9370u;
    // NOP
    // 0x1d9374: 0x0  nop
    ctx->pc = 0x1d9374u;
    // NOP
    // 0x1d9378: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D9378u;
    {
        const bool branch_taken_0x1d9378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9378u;
        // 0x1d937c: 0x2442ffa0  addiu       $v0, $v0, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9378) {
            ctx->pc = 0x1D9368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9368;
        }
    }
    ctx->pc = 0x1D9380u;
label_1d9380:
    // 0x1d9380: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D9380u;
    SET_GPR_U32(ctx, 31, 0x1D9388u);
    ctx->pc = 0x1D9384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9380u;
    // 0x1d9384: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D9380u, 0x1D9388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9388u;
label_1d9388:
    // 0x1d9388: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1D9388u;
    SET_GPR_U32(ctx, 31, 0x1D9390u);
    ctx->pc = 0x1D938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9388u;
    // 0x1d938c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D9388u, 0x1D9390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9390u;
label_1d9390:
    // 0x1d9390: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1d9390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1d9394: 0xc07633e  jal         func_1D8CF8
    ctx->pc = 0x1D9394u;
    SET_GPR_U32(ctx, 31, 0x1D939Cu);
    ctx->pc = 0x1D9398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9394u;
    // 0x1d9398: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8CF8u, 0x1D9394u, 0x1D939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D939Cu;
label_1d939c:
    // 0x1d939c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1d939cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1d93a0:
    // 0x1d93a0: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x1d93a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1d93a4: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D93A4u;
    {
        const bool branch_taken_0x1d93a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d93a4) {
            ctx->pc = 0x1D93A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D93A4u;
            // 0x1d93a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D940Cu;
            goto label_1d940c;
        }
    }
    ctx->pc = 0x1D93ACu;
    // 0x1d93ac: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1d93acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d93b0: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D93B0u;
    {
        const bool branch_taken_0x1d93b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D93B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93B0u;
        // 0x1d93b4: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93b0) {
            ctx->pc = 0x1D93F8u;
            goto label_1d93f8;
        }
    }
    ctx->pc = 0x1D93B8u;
    // 0x1d93b8: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x1d93b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x1d93bc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d93bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93c0: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x1d93c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d93c4: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x1d93c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1d93c8: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D93C8u;
    {
        const bool branch_taken_0x1d93c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93C8u;
        // 0x1d93cc: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93c8) {
            ctx->pc = 0x1D93F0u;
            goto label_1d93f0;
        }
    }
    ctx->pc = 0x1D93D0u;
    // 0x1d93d0: 0x2442ff60  addiu       $v0, $v0, -0xA0
    ctx->pc = 0x1d93d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
    // 0x1d93d4: 0x0  nop
    ctx->pc = 0x1d93d4u;
    // NOP
label_1d93d8:
    // 0x1d93d8: 0x0  nop
    ctx->pc = 0x1d93d8u;
    // NOP
    // 0x1d93dc: 0x0  nop
    ctx->pc = 0x1d93dcu;
    // NOP
    // 0x1d93e0: 0x0  nop
    ctx->pc = 0x1d93e0u;
    // NOP
    // 0x1d93e4: 0x0  nop
    ctx->pc = 0x1d93e4u;
    // NOP
    // 0x1d93e8: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D93E8u;
    {
        const bool branch_taken_0x1d93e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D93ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93E8u;
        // 0x1d93ec: 0x2442ff60  addiu       $v0, $v0, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93e8) {
            ctx->pc = 0x1D93D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d93d8;
        }
    }
    ctx->pc = 0x1D93F0u;
label_1d93f0:
    // 0x1d93f0: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D93F0u;
    SET_GPR_U32(ctx, 31, 0x1D93F8u);
    ctx->pc = 0x1D93F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93F0u;
    // 0x1d93f4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D93F0u, 0x1D93F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93F8u;
label_1d93f8:
    // 0x1d93f8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1D93F8u;
    SET_GPR_U32(ctx, 31, 0x1D9400u);
    ctx->pc = 0x1D93FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93F8u;
    // 0x1d93fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D93F8u, 0x1D9400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9400u;
label_1d9400:
    // 0x1d9400: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1d9400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1d9404: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1d9404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1d9408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d940c:
    // 0x1d940c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d940cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9410: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9414: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9414u;
        // 0x1d9418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D941Cu;
    // 0x1d941c: 0x0  nop
    ctx->pc = 0x1d941cu;
    // NOP
    ctx->pc = 0x1d9420u;
}
