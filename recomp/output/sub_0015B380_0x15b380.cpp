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

// Function: sub_0015B380
// Address: 0x15b380 - 0x15b3f4
void sub_0015B380_0x15b380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B380_0x15b380");
#endif

    switch (ctx->pc) {
        case 0x15b3ccu: goto label_15b3cc;
        case 0x15b3dcu: goto label_15b3dc;
        case 0x15b3ecu: goto label_15b3ec;
        default: break;
    }

    ctx->pc = 0x15b380u;

    // 0x15b380: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x15b380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15b384: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15b384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15b388: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x15b388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15b38c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15b38cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15b390: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x15b390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15b394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15b398: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x15b398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15b39c: 0x8c440328  lw          $a0, 0x328($v0)
    ctx->pc = 0x15b39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 808)));
    // 0x15b3a0: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x15b3a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x15b3a4: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x15B3A4u;
    {
        const bool branch_taken_0x15b3a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3A4u;
        // 0x15b3a8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3a4) {
            ctx->pc = 0x15B40Cu;
            return;
        }
    }
    ctx->pc = 0x15B3ACu;
    // 0x15b3ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15b3b0: 0x2442eec0  addiu       $v0, $v0, -0x1140
    ctx->pc = 0x15b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962880));
    // 0x15b3b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15b3b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15b3bc: 0x800008  jr          $a0
    ctx->pc = 0x15B3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B3C4u: goto label_15b3c4;
            case 0x15B3D4u: goto label_15b3d4;
            case 0x15B3E4u: goto label_15b3e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B3BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15B3C4u;
label_15b3c4:
    // 0x15b3c4: 0xc057476  jal         func_15D1D8
    ctx->pc = 0x15B3C4u;
    SET_GPR_U32(ctx, 31, 0x15B3CCu);
    ctx->pc = 0x15B3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B3C4u;
    // 0x15b3c8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D1D8u, 0x15B3C4u, 0x15B3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B3CCu;
label_15b3cc:
    // 0x15b3cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15B3CCu;
    {
        const bool branch_taken_0x15b3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3CCu;
        // 0x15b3d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3cc) {
            ctx->pc = 0x15B410u;
            return;
        }
    }
    ctx->pc = 0x15B3D4u;
label_15b3d4:
    // 0x15b3d4: 0xc05754e  jal         func_15D538
    ctx->pc = 0x15B3D4u;
    SET_GPR_U32(ctx, 31, 0x15B3DCu);
    ctx->pc = 0x15B3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B3D4u;
    // 0x15b3d8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D538u, 0x15B3D4u, 0x15B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B3DCu;
label_15b3dc:
    // 0x15b3dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15B3DCu;
    {
        const bool branch_taken_0x15b3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3DCu;
        // 0x15b3e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3dc) {
            ctx->pc = 0x15B410u;
            return;
        }
    }
    ctx->pc = 0x15B3E4u;
label_15b3e4:
    // 0x15b3e4: 0xc057636  jal         func_15D8D8
    ctx->pc = 0x15B3E4u;
    SET_GPR_U32(ctx, 31, 0x15B3ECu);
    ctx->pc = 0x15B3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B3E4u;
    // 0x15b3e8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D8D8u, 0x15B3E4u, 0x15B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B3ECu;
label_15b3ec:
    // 0x15b3ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15B3ECu;
    {
        const bool branch_taken_0x15b3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3ECu;
        // 0x15b3f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3ec) {
            ctx->pc = 0x15B410u;
            return;
        }
    }
    ctx->pc = 0x15B3F4u;
}
