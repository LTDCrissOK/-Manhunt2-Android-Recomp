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

// Function: sub_0021E658
// Address: 0x21e658 - 0x21e6e0
void sub_0021E658_0x21e658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E658_0x21e658");
#endif

    switch (ctx->pc) {
        case 0x21e68cu: goto label_21e68c;
        case 0x21e6a4u: goto label_21e6a4;
        case 0x21e6c8u: goto label_21e6c8;
        default: break;
    }

    ctx->pc = 0x21e658u;

    // 0x21e658: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x21e658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x21e65c: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x21e65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x21e660: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x21e660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x21e664: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21e664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e668: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x21e668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x21e66c: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x21E66Cu;
    {
        const bool branch_taken_0x21e66c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E66Cu;
        // 0x21e670: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e66c) {
            ctx->pc = 0x21E6C8u;
            goto label_21e6c8;
        }
    }
    ctx->pc = 0x21E674u;
    // 0x21e674: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x21e674u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21e678: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21E678u;
    {
        const bool branch_taken_0x21e678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E678u;
        // 0x21e67c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e678) {
            ctx->pc = 0x21E6C8u;
            goto label_21e6c8;
        }
    }
    ctx->pc = 0x21E680u;
    // 0x21e680: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x21e680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x21e684: 0xc0c3482  jal         func_30D208
    ctx->pc = 0x21E684u;
    SET_GPR_U32(ctx, 31, 0x21E68Cu);
    ctx->pc = 0x21E688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E684u;
    // 0x21e688: 0x2484ff68  addiu       $a0, $a0, -0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D208u, 0x21E684u, 0x21E68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E68Cu;
label_21e68c:
    // 0x21e68c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x21E68Cu;
    {
        const bool branch_taken_0x21e68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e68c) {
            ctx->pc = 0x21E690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E68Cu;
            // 0x21e690: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E6B0u;
            goto label_21e6b0;
        }
    }
    ctx->pc = 0x21E694u;
    // 0x21e694: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x21e694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x21e698: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21e698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e69c: 0xc0c3482  jal         func_30D208
    ctx->pc = 0x21E69Cu;
    SET_GPR_U32(ctx, 31, 0x21E6A4u);
    ctx->pc = 0x21E6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E69Cu;
    // 0x21e6a0: 0x24843578  addiu       $a0, $a0, 0x3578 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D208u, 0x21E69Cu, 0x21E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E6A4u;
label_21e6a4:
    // 0x21e6a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E6A4u;
    {
        const bool branch_taken_0x21e6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E6A4u;
        // 0x21e6a8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e6a4) {
            ctx->pc = 0x21E6B8u;
            goto label_21e6b8;
        }
    }
    ctx->pc = 0x21E6ACu;
    // 0x21e6ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21e6b0:
    // 0x21e6b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21E6B0u;
    {
        const bool branch_taken_0x21e6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E6B0u;
        // 0x21e6b4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e6b0) {
            ctx->pc = 0x21E6C8u;
            goto label_21e6c8;
        }
    }
    ctx->pc = 0x21E6B8u;
label_21e6b8:
    // 0x21e6b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21e6b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e6bc: 0x24a51de0  addiu       $a1, $a1, 0x1DE0
    ctx->pc = 0x21e6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7648));
    // 0x21e6c0: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x21E6C0u;
    SET_GPR_U32(ctx, 31, 0x21E6C8u);
    ctx->pc = 0x21E6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E6C0u;
    // 0x21e6c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x21E6C0u, 0x21E6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E6C8u;
label_21e6c8:
    // 0x21e6c8: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x21e6c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21e6cc: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x21e6ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21e6d0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x21e6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21e6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x21E6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E6D4u;
        // 0x21e6d8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E6D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E6DCu;
    // 0x21e6dc: 0x0  nop
    ctx->pc = 0x21e6dcu;
    // NOP
    ctx->pc = 0x21e6e0u;
}
