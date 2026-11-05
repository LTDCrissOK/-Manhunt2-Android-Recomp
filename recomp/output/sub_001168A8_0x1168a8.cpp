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

// Function: sub_001168A8
// Address: 0x1168a8 - 0x1169a8
void sub_001168A8_0x1168a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001168A8_0x1168a8");
#endif

    switch (ctx->pc) {
        case 0x1168bcu: goto label_1168bc;
        case 0x1168e0u: goto label_1168e0;
        case 0x116910u: goto label_116910;
        case 0x116938u: goto label_116938;
        case 0x116960u: goto label_116960;
        case 0x116990u: goto label_116990;
        default: break;
    }

    ctx->pc = 0x1168a8u;

    // 0x1168a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1168a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1168ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1168acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1168b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1168b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1168b4: 0xc042376  jal         func_108DD8
    ctx->pc = 0x1168B4u;
    SET_GPR_U32(ctx, 31, 0x1168BCu);
    ctx->pc = 0x1168B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1168B4u;
    // 0x1168b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108DD8u, 0x1168B4u, 0x1168BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1168BCu;
label_1168bc:
    // 0x1168bc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1168bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1168c0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1168c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1168c4: 0x24420488  addiu       $v0, $v0, 0x488
    ctx->pc = 0x1168c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1160));
    // 0x1168c8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1168c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1168cc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1168ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1168d0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1168d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1168d4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1168d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1168d8: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x1168d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1168dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1168dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1168e0:
    // 0x1168e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1168e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1168e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1168e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1168e8: 0x0  nop
    ctx->pc = 0x1168e8u;
    // NOP
    // 0x1168ec: 0x0  nop
    ctx->pc = 0x1168ecu;
    // NOP
    // 0x1168f0: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1168F0u;
    {
        const bool branch_taken_0x1168f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1168F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1168F0u;
        // 0x1168f4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1168f0) {
            ctx->pc = 0x1168E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1168e0;
        }
    }
    ctx->pc = 0x1168F8u;
    // 0x1168f8: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x1168f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1168fc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1168fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x116900: 0x26050058  addiu       $a1, $s0, 0x58
    ctx->pc = 0x116900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x116904: 0x26060070  addiu       $a2, $s0, 0x70
    ctx->pc = 0x116904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x116908: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x116908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11690c: 0x0  nop
    ctx->pc = 0x11690cu;
    // NOP
label_116910:
    // 0x116910: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x116910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x116914: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x116914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x116918: 0x0  nop
    ctx->pc = 0x116918u;
    // NOP
    // 0x11691c: 0x0  nop
    ctx->pc = 0x11691cu;
    // NOP
    // 0x116920: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x116920u;
    {
        const bool branch_taken_0x116920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x116924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116920u;
        // 0x116924: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116920) {
            ctx->pc = 0x116910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116910;
        }
    }
    ctx->pc = 0x116928u;
    // 0x116928: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x116928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11692c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x11692cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x116930: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x116930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116934: 0x0  nop
    ctx->pc = 0x116934u;
    // NOP
label_116938:
    // 0x116938: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x116938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x11693c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11693cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x116940: 0x0  nop
    ctx->pc = 0x116940u;
    // NOP
    // 0x116944: 0x0  nop
    ctx->pc = 0x116944u;
    // NOP
    // 0x116948: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x116948u;
    {
        const bool branch_taken_0x116948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x11694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116948u;
        // 0x11694c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116948) {
            ctx->pc = 0x116938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116938;
        }
    }
    ctx->pc = 0x116950u;
    // 0x116950: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x116950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116954: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x116954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x116958: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x116958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11695c: 0x0  nop
    ctx->pc = 0x11695cu;
    // NOP
label_116960:
    // 0x116960: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x116960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x116964: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x116964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x116968: 0x0  nop
    ctx->pc = 0x116968u;
    // NOP
    // 0x11696c: 0x0  nop
    ctx->pc = 0x11696cu;
    // NOP
    // 0x116970: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x116970u;
    {
        const bool branch_taken_0x116970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x116974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116970u;
        // 0x116974: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116970) {
            ctx->pc = 0x116960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116960;
        }
    }
    ctx->pc = 0x116978u;
    // 0x116978: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x116978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11697c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x11697cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x116980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116984: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x116984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x116988: 0xc045b6a  jal         func_116DA8
    ctx->pc = 0x116988u;
    SET_GPR_U32(ctx, 31, 0x116990u);
    ctx->pc = 0x11698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116988u;
    // 0x11698c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116DA8u, 0x116988u, 0x116990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116990u;
label_116990:
    // 0x116990: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x116990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116994: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x116994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11699c: 0x3e00008  jr          $ra
    ctx->pc = 0x11699Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1169A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11699Cu;
        // 0x1169a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11699Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1169A4u;
    // 0x1169a4: 0x0  nop
    ctx->pc = 0x1169a4u;
    // NOP
    ctx->pc = 0x1169a8u;
}
