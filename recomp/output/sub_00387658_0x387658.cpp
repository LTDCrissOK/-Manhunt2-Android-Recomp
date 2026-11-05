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

// Function: sub_00387658
// Address: 0x387658 - 0x387738
void sub_00387658_0x387658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387658_0x387658");
#endif

    ctx->pc = 0x387658u;

    // 0x387658: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x387658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38765c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x38765cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x387660: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x387660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x387664: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x387664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387668: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x387668u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x1000e010
    // 0x38766c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x38766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x387670: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x387670u;
    {
        const bool branch_taken_0x387670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387670u;
        // 0x387674: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x387670) {
            ctx->pc = 0x387688u;
            goto label_387688;
        }
    }
    ctx->pc = 0x387678u;
    // 0x387678: 0xf  sync
    ctx->pc = 0x387678u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x38767c: 0x42000038  ei
    ctx->pc = 0x38767cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x387680: 0x3e00008  jr          $ra
    ctx->pc = 0x387680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387680u;
        // 0x387684: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387688u;
label_387688:
    // 0x387688: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x387688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x38768c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x38768Cu;
    {
        const bool branch_taken_0x38768c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38768Cu;
        // 0x387690: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38768c) {
            ctx->pc = 0x3876ECu;
            goto label_3876ec;
        }
    }
    ctx->pc = 0x387694u;
    // 0x387694: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x387694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x387698: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x387698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38769c: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x38769cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x3876a0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3876a0u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 4)); // MMIO: 0x1000b410
    // 0x3876a4: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x3876a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x3876a8: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x3876a8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7)); // MMIO: 0x1000b420
    // 0x3876ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3876acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3876b0: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x3876b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x3876b4: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x3876b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x3876b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3876b8u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 3)); // MMIO: 0x1000b400
    // 0x3876bc: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x3876bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x3876c0: 0x34a5fff0  ori         $a1, $a1, 0xFFF0
    ctx->pc = 0x3876c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65520);
    // 0x3876c4: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x3876c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x3876c8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3876c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3876cc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x3876ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x3876d0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3876d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3876d4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3876d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3876d8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3876d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3876dc: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x3876dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3876e0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3876e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x3876e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3876E4u;
    {
        const bool branch_taken_0x3876e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3876E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3876E4u;
        // 0x3876e8: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3876e4) {
            ctx->pc = 0x38771Cu;
            goto label_38771c;
        }
    }
    ctx->pc = 0x3876ECu;
label_3876ec:
    // 0x3876ec: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x3876ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3876f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3876f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3876f4: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x3876f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x3876f8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3876f8u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 4)); // MMIO: 0x1000b410
    // 0x3876fc: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x3876fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x387700: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x387700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x387704: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x387704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x387708: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x387708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38770c: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x38770cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x387710: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x387710u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x387714: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x387714u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 5)); // MMIO: 0x1000b400
    // 0x387718: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x387718u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_38771c:
    // 0x38771c: 0xf  sync
    ctx->pc = 0x38771cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x387720: 0x42000038  ei
    ctx->pc = 0x387720u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x387724: 0x3e00008  jr          $ra
    ctx->pc = 0x387724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387724u;
        // 0x387728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38772Cu;
    // 0x38772c: 0x0  nop
    ctx->pc = 0x38772cu;
    // NOP
    // 0x387730: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x387730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x387734: 0x0  nop
    ctx->pc = 0x387734u;
    // NOP
    ctx->pc = 0x387738u;
}
