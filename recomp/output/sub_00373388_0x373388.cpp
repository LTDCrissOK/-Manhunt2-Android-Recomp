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

// Function: sub_00373388
// Address: 0x373388 - 0x373420
void sub_00373388_0x373388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373388_0x373388");
#endif

    ctx->pc = 0x373388u;

    // 0x373388: 0x3c02cfff  lui         $v0, 0xCFFF
    ctx->pc = 0x373388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53247 << 16));
    // 0x37338c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x37338cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373390: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x373390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x373394: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x373394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x373398: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x373398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x37339c: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x37339cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3733a0: 0x2463ccd8  addiu       $v1, $v1, -0x3328
    ctx->pc = 0x3733a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954200));
    // 0x3733a4: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x3733a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x3733a8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x3733a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x3733ac: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3733acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3733b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3733B0u;
    {
        const bool branch_taken_0x3733b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3733B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3733B0u;
        // 0x3733b4: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3733b0) {
            ctx->pc = 0x3733C0u;
            goto label_3733c0;
        }
    }
    ctx->pc = 0x3733B8u;
    // 0x3733b8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3733b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3733bc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3733bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3733c0:
    // 0x3733c0: 0xacc50030  sw          $a1, 0x30($a2)
    ctx->pc = 0x3733c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 5));
    // 0x3733c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3733c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3733c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3733c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3733cc: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x3733ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x3733d0: 0xe42004  sllv        $a0, $a0, $a3
    ctx->pc = 0x3733d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x3733d4: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x3733d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x3733d8: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3733d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x3733dc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3733dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3733e0: 0x24635b00  addiu       $v1, $v1, 0x5B00
    ctx->pc = 0x3733e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23296));
    // 0x3733e4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3733e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3733e8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x3733e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x3733ec: 0x3484fff3  ori         $a0, $a0, 0xFFF3
    ctx->pc = 0x3733ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65523);
    // 0x3733f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3733f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3733f4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3733f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3733f8: 0x34420104  ori         $v0, $v0, 0x104
    ctx->pc = 0x3733f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)260);
    // 0x3733fc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3733fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x373400: 0xf  sync
    ctx->pc = 0x373400u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x373404: 0x3e00008  jr          $ra
    ctx->pc = 0x373404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37340Cu;
    // 0x37340c: 0x0  nop
    ctx->pc = 0x37340cu;
    // NOP
    // 0x373410: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x373410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x373414: 0x0  nop
    ctx->pc = 0x373414u;
    // NOP
    // 0x373418: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x373418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37341c: 0x0  nop
    ctx->pc = 0x37341cu;
    // NOP
    ctx->pc = 0x373420u;
}
