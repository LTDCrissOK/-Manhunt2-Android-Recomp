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

// Function: sub_0010B958
// Address: 0x10b958 - 0x10b9e0
void sub_0010B958_0x10b958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B958_0x10b958");
#endif

    switch (ctx->pc) {
        case 0x10b974u: goto label_10b974;
        case 0x10b9a8u: goto label_10b9a8;
        case 0x10b9b8u: goto label_10b9b8;
        case 0x10b9c8u: goto label_10b9c8;
        default: break;
    }

    ctx->pc = 0x10b958u;

    // 0x10b958: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b95c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b960: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b964: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b968: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b96c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B96Cu;
    SET_GPR_U32(ctx, 31, 0x10B974u);
    ctx->pc = 0x10B970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B96Cu;
    // 0x10b970: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B96Cu, 0x10B974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B974u;
label_10b974:
    // 0x10b974: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b974u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b978: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10b978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10b97c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B97Cu;
    {
        const bool branch_taken_0x10b97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B97Cu;
        // 0x10b980: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b97c) {
            ctx->pc = 0x10B998u;
            goto label_10b998;
        }
    }
    ctx->pc = 0x10B984u;
    // 0x10b984: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10b984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b988: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10b988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10b98c: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x10b98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10b990: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B990u;
    {
        const bool branch_taken_0x10b990 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B990u;
        // 0x10b994: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b990) {
            ctx->pc = 0x10B9A0u;
            goto label_10b9a0;
        }
    }
    ctx->pc = 0x10B998u;
label_10b998:
    // 0x10b998: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10B998u;
    {
        const bool branch_taken_0x10b998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B998u;
        // 0x10b99c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b998) {
            ctx->pc = 0x10B9CCu;
            goto label_10b9cc;
        }
    }
    ctx->pc = 0x10B9A0u;
label_10b9a0:
    // 0x10b9a0: 0xc047866  jal         func_11E198
    ctx->pc = 0x10B9A0u;
    SET_GPR_U32(ctx, 31, 0x10B9A8u);
    ctx->pc = 0x10B9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B9A0u;
    // 0x10b9a4: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x10B9A0u, 0x10B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B9A8u;
label_10b9a8:
    // 0x10b9a8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B9A8u;
    {
        const bool branch_taken_0x10b9a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b9a8) {
            ctx->pc = 0x10B9C0u;
            goto label_10b9c0;
        }
    }
    ctx->pc = 0x10B9B0u;
    // 0x10b9b0: 0xc0953d8  jal         func_254F60
    ctx->pc = 0x10B9B0u;
    SET_GPR_U32(ctx, 31, 0x10B9B8u);
    ctx->pc = 0x10B9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B9B0u;
    // 0x10b9b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254F60u, 0x10B9B0u, 0x10B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B9B8u;
label_10b9b8:
    // 0x10b9b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10B9B8u;
    {
        const bool branch_taken_0x10b9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B9B8u;
        // 0x10b9bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b9b8) {
            ctx->pc = 0x10B9CCu;
            goto label_10b9cc;
        }
    }
    ctx->pc = 0x10B9C0u;
label_10b9c0:
    // 0x10b9c0: 0xc0953d4  jal         func_254F50
    ctx->pc = 0x10B9C0u;
    SET_GPR_U32(ctx, 31, 0x10B9C8u);
    ctx->pc = 0x10B9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B9C0u;
    // 0x10b9c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254F50u, 0x10B9C0u, 0x10B9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B9C8u;
label_10b9c8:
    // 0x10b9c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b9cc:
    // 0x10b9cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b9ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b9d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b9d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b9d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10B9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B9D8u;
        // 0x10b9dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B9E0u;
}
