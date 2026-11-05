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

// Function: sub_0014E188
// Address: 0x14e188 - 0x14e220
void sub_0014E188_0x14e188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E188_0x14e188");
#endif

    switch (ctx->pc) {
        case 0x14e1d4u: goto label_14e1d4;
        case 0x14e1e0u: goto label_14e1e0;
        case 0x14e208u: goto label_14e208;
        default: break;
    }

    ctx->pc = 0x14e188u;

    // 0x14e188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14e188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14e18c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14e18cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14e190: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14e190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14e194: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14e194u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14e198: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14e198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14e19c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14e19cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e1a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14e1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14e1a4: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x14e1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x14e1a8: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x14e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x14e1ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14e1acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14e1b0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x14e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14e1b4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x14e1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14e1b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14e1bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14e1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e1c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e1c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14e1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14e1c8: 0x8c70020c  lw          $s0, 0x20C($v1)
    ctx->pc = 0x14e1c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x14e1cc: 0xc04547e  jal         func_1151F8
    ctx->pc = 0x14E1CCu;
    SET_GPR_U32(ctx, 31, 0x14E1D4u);
    ctx->pc = 0x14E1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E1CCu;
    // 0x14e1d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1151F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1151F8u, 0x14E1CCu, 0x14E1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1D4u;
label_14e1d4:
    // 0x14e1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e1d8: 0xc044084  jal         func_110210
    ctx->pc = 0x14E1D8u;
    SET_GPR_U32(ctx, 31, 0x14E1E0u);
    ctx->pc = 0x14E1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E1D8u;
    // 0x14e1dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110210u, 0x14E1D8u, 0x14E1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1E0u;
label_14e1e0:
    // 0x14e1e0: 0x8e220914  lw          $v0, 0x914($s1)
    ctx->pc = 0x14e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2324)));
    // 0x14e1e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14E1E4u;
    {
        const bool branch_taken_0x14e1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1E4u;
        // 0x14e1e8: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e1e4) {
            ctx->pc = 0x14E208u;
            goto label_14e208;
        }
    }
    ctx->pc = 0x14E1ECu;
    // 0x14e1ec: 0x8e2508e0  lw          $a1, 0x8E0($s1)
    ctx->pc = 0x14e1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2272)));
    // 0x14e1f0: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E1F0u;
    {
        const bool branch_taken_0x14e1f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x14E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1F0u;
        // 0x14e1f4: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e1f0) {
            ctx->pc = 0x14E208u;
            goto label_14e208;
        }
    }
    ctx->pc = 0x14E1F8u;
    // 0x14e1f8: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E1F8u;
    {
        const bool branch_taken_0x14e1f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e1f8) {
            ctx->pc = 0x14E1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E1F8u;
            // 0x14e1fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E20Cu;
            goto label_14e20c;
        }
    }
    ctx->pc = 0x14E200u;
    // 0x14e200: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x14E200u;
    SET_GPR_U32(ctx, 31, 0x14E208u);
    ctx->pc = 0x14E204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E200u;
    // 0x14e204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x14E200u, 0x14E208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E208u;
label_14e208:
    // 0x14e208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14e208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14e20c:
    // 0x14e20c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14e20cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14e210: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14e210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e214: 0x3e00008  jr          $ra
    ctx->pc = 0x14E214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E214u;
        // 0x14e218: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E21Cu;
    // 0x14e21c: 0x0  nop
    ctx->pc = 0x14e21cu;
    // NOP
    ctx->pc = 0x14e220u;
}
