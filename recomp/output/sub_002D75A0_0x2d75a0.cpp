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

// Function: sub_002D75A0
// Address: 0x2d75a0 - 0x2d7638
void sub_002D75A0_0x2d75a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D75A0_0x2d75a0");
#endif

    switch (ctx->pc) {
        case 0x2d75d8u: goto label_2d75d8;
        case 0x2d7608u: goto label_2d7608;
        case 0x2d761cu: goto label_2d761c;
        default: break;
    }

    ctx->pc = 0x2d75a0u;

    // 0x2d75a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d75a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d75a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d75a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d75a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d75a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d75ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d75acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d75b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d75b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d75b4: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x2d75b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2d75b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d75b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d75bc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d75bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d75c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D75C0u;
    {
        const bool branch_taken_0x2d75c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D75C0u;
        // 0x2d75c4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d75c0) {
            ctx->pc = 0x2D75F4u;
            goto label_2d75f4;
        }
    }
    ctx->pc = 0x2D75C8u;
    // 0x2d75c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d75c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d75cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d75ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d75d0: 0xc0fb682  jal         func_3EDA08
    ctx->pc = 0x2D75D0u;
    SET_GPR_U32(ctx, 31, 0x2D75D8u);
    ctx->pc = 0x2D75D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D75D0u;
    // 0x2d75d4: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDA08u, 0x2D75D0u, 0x2D75D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D75D8u;
label_2d75d8:
    // 0x2d75d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d75d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d75dc: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x2d75dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
    // 0x2d75e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d75e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d75e4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d75e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d75e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d75e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d75ec: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x2d75ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
    // 0x2d75f0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2d75f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2d75f4:
    // 0x2d75f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d75f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d75f8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D75F8u;
    {
        const bool branch_taken_0x2d75f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D75FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D75F8u;
        // 0x2d75fc: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d75f8) {
            ctx->pc = 0x2D760Cu;
            goto label_2d760c;
        }
    }
    ctx->pc = 0x2D7600u;
    // 0x2d7600: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D7600u;
    SET_GPR_U32(ctx, 31, 0x2D7608u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D7600u, 0x2D7608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7608u;
label_2d7608:
    // 0x2d7608: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x2d7608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_2d760c:
    // 0x2d760c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D760Cu;
    {
        const bool branch_taken_0x2d760c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D760Cu;
        // 0x2d7610: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d760c) {
            ctx->pc = 0x2D7620u;
            goto label_2d7620;
        }
    }
    ctx->pc = 0x2D7614u;
    // 0x2d7614: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D7614u;
    SET_GPR_U32(ctx, 31, 0x2D761Cu);
    ctx->pc = 0x2D7618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7614u;
    // 0x2d7618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D7614u, 0x2D761Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D761Cu;
label_2d761c:
    // 0x2d761c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d761cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d7620:
    // 0x2d7620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d7620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7624: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d7624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7628: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d7628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d762c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D762Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D762Cu;
        // 0x2d7630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D762Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7634u;
    // 0x2d7634: 0x0  nop
    ctx->pc = 0x2d7634u;
    // NOP
    ctx->pc = 0x2d7638u;
}
