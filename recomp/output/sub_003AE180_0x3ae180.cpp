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

// Function: sub_003AE180
// Address: 0x3ae180 - 0x3ae238
void sub_003AE180_0x3ae180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE180_0x3ae180");
#endif

    switch (ctx->pc) {
        case 0x3ae1b8u: goto label_3ae1b8;
        case 0x3ae1d0u: goto label_3ae1d0;
        case 0x3ae230u: goto label_3ae230;
        default: break;
    }

    ctx->pc = 0x3ae180u;

    // 0x3ae180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ae180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ae184: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ae184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ae188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ae18c: 0x8082000e  lb          $v0, 0xE($a0)
    ctx->pc = 0x3ae18cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x3ae190: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AE190u;
    {
        const bool branch_taken_0x3ae190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3AE194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE190u;
        // 0x3ae194: 0x9085000e  lbu         $a1, 0xE($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae190) {
            ctx->pc = 0x3AE1A4u;
            goto label_3ae1a4;
        }
    }
    ctx->pc = 0x3AE198u;
    // 0x3ae198: 0x8c8300e8  lw          $v1, 0xE8($a0)
    ctx->pc = 0x3ae198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x3ae19c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AE19Cu;
    {
        const bool branch_taken_0x3ae19c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE19Cu;
        // 0x3ae1a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae19c) {
            ctx->pc = 0x3AE1C4u;
            goto label_3ae1c4;
        }
    }
    ctx->pc = 0x3AE1A4u;
label_3ae1a4:
    // 0x3ae1a4: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AE1A4u;
    {
        const bool branch_taken_0x3ae1a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae1a4) {
            ctx->pc = 0x3AE1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE1A4u;
            // 0x3ae1a8: 0x51600  sll         $v0, $a1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE1C0u;
            goto label_3ae1c0;
        }
    }
    ctx->pc = 0x3AE1ACu;
    // 0x3ae1ac: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ae1acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3ae1b0: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x3AE1B0u;
    SET_GPR_U32(ctx, 31, 0x3AE1B8u);
    ctx->pc = 0x3AE1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE1B0u;
    // 0x3ae1b4: 0x2484fd90  addiu       $a0, $a0, -0x270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x3AE1B0u, 0x3AE1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE1B8u;
label_3ae1b8:
    // 0x3ae1b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AE1B8u;
    {
        const bool branch_taken_0x3ae1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE1B8u;
        // 0x3ae1bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae1b8) {
            ctx->pc = 0x3AE1C4u;
            goto label_3ae1c4;
        }
    }
    ctx->pc = 0x3AE1C0u;
label_3ae1c0:
    // 0x3ae1c0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3ae1c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_3ae1c4:
    // 0x3ae1c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ae1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE1C8u;
        // 0x3ae1cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE1D0u;
label_3ae1d0:
    // 0x3ae1d0: 0x84850098  lh          $a1, 0x98($a0)
    ctx->pc = 0x3ae1d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x3ae1d4: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3AE1D4u;
    {
        const bool branch_taken_0x3ae1d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE1D4u;
        // 0x3ae1d8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae1d4) {
            ctx->pc = 0x3AE228u;
            goto label_3ae228;
        }
    }
    ctx->pc = 0x3AE1DCu;
    // 0x3ae1dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ae1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ae1e0: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AE1E0u;
    {
        const bool branch_taken_0x3ae1e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE1E0u;
        // 0x3ae1e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae1e0) {
            ctx->pc = 0x3AE208u;
            goto label_3ae208;
        }
    }
    ctx->pc = 0x3AE1E8u;
    // 0x3ae1e8: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x3ae1e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x3ae1ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ae1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ae1f0: 0x1065000d  beq         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x3AE1F0u;
    {
        const bool branch_taken_0x3ae1f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x3AE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE1F0u;
        // 0x3ae1f4: 0x38640001  xori        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae1f0) {
            ctx->pc = 0x3AE228u;
            goto label_3ae228;
        }
    }
    ctx->pc = 0x3AE1F8u;
    // 0x3ae1f8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3ae1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ae1fc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ae1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ae200: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE200u;
        // 0x3ae204: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE208u;
label_3ae208:
    // 0x3ae208: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AE208u;
    {
        const bool branch_taken_0x3ae208 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ae208) {
            ctx->pc = 0x3AE20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE208u;
            // 0x3ae20c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE228u;
            goto label_3ae228;
        }
    }
    ctx->pc = 0x3AE210u;
    // 0x3ae210: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x3ae210u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x3ae214: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3ae214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ae218: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ae218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ae21c: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x3ae21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x3ae220: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE220u;
        // 0x3ae224: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE228u;
label_3ae228:
    // 0x3ae228: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE230u;
label_3ae230:
    // 0x3ae230: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE230u;
        // 0x3ae234: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE238u;
}
