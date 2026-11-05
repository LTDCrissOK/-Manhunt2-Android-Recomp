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

// Function: sub_00145490
// Address: 0x145490 - 0x1454f8
void sub_00145490_0x145490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145490_0x145490");
#endif

    switch (ctx->pc) {
        case 0x1454a4u: goto label_1454a4;
        case 0x1454b4u: goto label_1454b4;
        case 0x1454c4u: goto label_1454c4;
        case 0x1454d4u: goto label_1454d4;
        case 0x1454e4u: goto label_1454e4;
        default: break;
    }

    ctx->pc = 0x145490u;

    // 0x145490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x145494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145498: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x145498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14549c: 0xc05153e  jal         func_1454F8
    ctx->pc = 0x14549Cu;
    SET_GPR_U32(ctx, 31, 0x1454A4u);
    ctx->pc = 0x1454A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14549Cu;
    // 0x1454a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1454F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1454F8u, 0x14549Cu, 0x1454A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454A4u;
label_1454a4:
    // 0x1454a4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1454A4u;
    {
        const bool branch_taken_0x1454a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1454a4) {
            ctx->pc = 0x1454A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1454A4u;
            // 0x1454a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1454E8u;
            goto label_1454e8;
        }
    }
    ctx->pc = 0x1454ACu;
    // 0x1454ac: 0xc051546  jal         func_145518
    ctx->pc = 0x1454ACu;
    SET_GPR_U32(ctx, 31, 0x1454B4u);
    ctx->pc = 0x1454B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1454ACu;
    // 0x1454b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145518u, 0x1454ACu, 0x1454B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454B4u;
label_1454b4:
    // 0x1454b4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1454B4u;
    {
        const bool branch_taken_0x1454b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1454b4) {
            ctx->pc = 0x1454B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1454B4u;
            // 0x1454b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1454E8u;
            goto label_1454e8;
        }
    }
    ctx->pc = 0x1454BCu;
    // 0x1454bc: 0xc051556  jal         func_145558
    ctx->pc = 0x1454BCu;
    SET_GPR_U32(ctx, 31, 0x1454C4u);
    ctx->pc = 0x1454C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1454BCu;
    // 0x1454c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145558u, 0x1454BCu, 0x1454C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454C4u;
label_1454c4:
    // 0x1454c4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1454C4u;
    {
        const bool branch_taken_0x1454c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1454c4) {
            ctx->pc = 0x1454C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1454C4u;
            // 0x1454c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1454E8u;
            goto label_1454e8;
        }
    }
    ctx->pc = 0x1454CCu;
    // 0x1454cc: 0xc051568  jal         func_1455A0
    ctx->pc = 0x1454CCu;
    SET_GPR_U32(ctx, 31, 0x1454D4u);
    ctx->pc = 0x1454D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1454CCu;
    // 0x1454d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1455A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1455A0u, 0x1454CCu, 0x1454D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454D4u;
label_1454d4:
    // 0x1454d4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1454D4u;
    {
        const bool branch_taken_0x1454d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1454d4) {
            ctx->pc = 0x1454D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1454D4u;
            // 0x1454d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1454E8u;
            goto label_1454e8;
        }
    }
    ctx->pc = 0x1454DCu;
    // 0x1454dc: 0xc05157a  jal         func_1455E8
    ctx->pc = 0x1454DCu;
    SET_GPR_U32(ctx, 31, 0x1454E4u);
    ctx->pc = 0x1454E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1454DCu;
    // 0x1454e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1455E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1455E8u, 0x1454DCu, 0x1454E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454E4u;
label_1454e4:
    // 0x1454e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1454e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1454e8:
    // 0x1454e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1454e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1454ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1454ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1454F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1454ECu;
        // 0x1454f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1454ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1454F4u;
    // 0x1454f4: 0x0  nop
    ctx->pc = 0x1454f4u;
    // NOP
    ctx->pc = 0x1454f8u;
}
