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

// Function: sub_00128350
// Address: 0x128350 - 0x1283e8
void sub_00128350_0x128350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128350_0x128350");
#endif

    switch (ctx->pc) {
        case 0x128388u: goto label_128388;
        case 0x1283a8u: goto label_1283a8;
        default: break;
    }

    ctx->pc = 0x128350u;

    // 0x128350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x128354: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x128354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x128358: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12835c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12835cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x128360: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x128360u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x128364: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x128364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x128368: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x128368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12836c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12836cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x128370: 0x92220e80  lbu         $v0, 0xE80($s1)
    ctx->pc = 0x128370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3712)));
    // 0x128374: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x128374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x128378: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x128378u;
    {
        const bool branch_taken_0x128378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128378u;
        // 0x12837c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128378) {
            ctx->pc = 0x1283C8u;
            goto label_1283c8;
        }
    }
    ctx->pc = 0x128380u;
    // 0x128380: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x128380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x128384: 0x0  nop
    ctx->pc = 0x128384u;
    // NOP
label_128388:
    // 0x128388: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x128388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12838c: 0x8c430a80  lw          $v1, 0xA80($v0)
    ctx->pc = 0x12838cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2688)));
    // 0x128390: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x128390u;
    {
        const bool branch_taken_0x128390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x128394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128390u;
        // 0x128394: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128390) {
            ctx->pc = 0x1283B4u;
            goto label_1283b4;
        }
    }
    ctx->pc = 0x128398u;
    // 0x128398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x128398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12839c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12839cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283a0: 0xc04a0a8  jal         func_1282A0
    ctx->pc = 0x1283A0u;
    SET_GPR_U32(ctx, 31, 0x1283A8u);
    ctx->pc = 0x1283A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1283A0u;
    // 0x1283a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1282A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1282A0u, 0x1283A0u, 0x1283A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1283A8u;
label_1283a8:
    // 0x1283a8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1283A8u;
    {
        const bool branch_taken_0x1283a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1283ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283A8u;
        // 0x1283ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283a8) {
            ctx->pc = 0x1283CCu;
            goto label_1283cc;
        }
    }
    ctx->pc = 0x1283B0u;
    // 0x1283b0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1283b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1283b4:
    // 0x1283b4: 0x92220e80  lbu         $v0, 0xE80($s1)
    ctx->pc = 0x1283b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3712)));
    // 0x1283b8: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1283b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1283bc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1283bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1283c0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1283C0u;
    {
        const bool branch_taken_0x1283c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1283C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283C0u;
        // 0x1283c4: 0x101140  sll         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283c0) {
            ctx->pc = 0x128388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128388;
        }
    }
    ctx->pc = 0x1283C8u;
label_1283c8:
    // 0x1283c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1283c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1283cc:
    // 0x1283cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1283ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1283d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1283d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1283d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1283d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1283d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1283d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1283dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1283DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1283E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283DCu;
        // 0x1283e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1283DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1283E4u;
    // 0x1283e4: 0x0  nop
    ctx->pc = 0x1283e4u;
    // NOP
    ctx->pc = 0x1283e8u;
}
