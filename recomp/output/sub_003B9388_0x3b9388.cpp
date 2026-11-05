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

// Function: sub_003B9388
// Address: 0x3b9388 - 0x3b94a0
void sub_003B9388_0x3b9388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9388_0x3b9388");
#endif

    switch (ctx->pc) {
        case 0x3b93e0u: goto label_3b93e0;
        case 0x3b942cu: goto label_3b942c;
        case 0x3b944cu: goto label_3b944c;
        case 0x3b9470u: goto label_3b9470;
        default: break;
    }

    ctx->pc = 0x3b9388u;

    // 0x3b9388: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x3b9388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x3b938c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3b938cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3b9390: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x3b9390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x3b9394: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x3b9394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x3b9398: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b9398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b939c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b939cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b93a0: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x3b93a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x3b93a4: 0x72442018  mult1       $a0, $s2, $a0
    ctx->pc = 0x3b93a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3b93a8: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x3b93a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b93ac: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x3b93acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x3b93b0: 0x3c130066  lui         $s3, 0x66
    ctx->pc = 0x3b93b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
    // 0x3b93b4: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x3b93b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x3b93b8: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x3b93b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x3b93bc: 0x26629810  addiu       $v0, $s3, -0x67F0
    ctx->pc = 0x3b93bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294940688));
    // 0x3b93c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b93c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b93c4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3b93c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b93c8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3b93c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b93cc: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x3b93ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3b93d0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B93D0u;
    {
        const bool branch_taken_0x3b93d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B93D0u;
        // 0x3b93d4: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b93d0) {
            ctx->pc = 0x3B93E8u;
            goto label_3b93e8;
        }
    }
    ctx->pc = 0x3B93D8u;
    // 0x3b93d8: 0xc0f2750  jal         func_3C9D40
    ctx->pc = 0x3B93D8u;
    SET_GPR_U32(ctx, 31, 0x3B93E0u);
    ctx->pc = 0x3C9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9D40u, 0x3B93D8u, 0x3B93E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B93E0u;
label_3b93e0:
    // 0x3b93e0: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3B93E0u;
    {
        const bool branch_taken_0x3b93e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3B93E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B93E0u;
        // 0x3b93e4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b93e0) {
            ctx->pc = 0x3B945Cu;
            goto label_3b945c;
        }
    }
    ctx->pc = 0x3B93E8u;
label_3b93e8:
    // 0x3b93e8: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x3b93e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3b93ec: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x3b93ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x3b93f0: 0x2073818  mult        $a3, $s0, $a3
    ctx->pc = 0x3b93f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b93f4: 0x72431818  mult1       $v1, $s2, $v1
    ctx->pc = 0x3b93f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b93f8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3b93f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b93fc: 0x26739810  addiu       $s3, $s3, -0x67F0
    ctx->pc = 0x3b93fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294940688));
    // 0x3b9400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b9400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9404: 0x2625001f  addiu       $a1, $s1, 0x1F
    ctx->pc = 0x3b9404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x3b9408: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b9408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3b940c: 0xe39021  addu        $s2, $a3, $v1
    ctx->pc = 0x3b940cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3b9410: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x3b9410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3b9414: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x3b9414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x3b9418: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3b9418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3b941c: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x3b941cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3b9420: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x3b9420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x3b9424: 0xc0f2878  jal         func_3CA1E0
    ctx->pc = 0x3B9424u;
    SET_GPR_U32(ctx, 31, 0x3B942Cu);
    ctx->pc = 0x3B9428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9424u;
    // 0x3b9428: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA1E0u, 0x3B9424u, 0x3B942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B942Cu;
label_3b942c:
    // 0x3b942c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3b942cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3b9430: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x3b9430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x3b9434: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x3b9434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x3b9438: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b9438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b943c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3b943cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x3b9440: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b9440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b9444: 0xc0f2758  jal         func_3C9D60
    ctx->pc = 0x3B9444u;
    SET_GPR_U32(ctx, 31, 0x3B944Cu);
    ctx->pc = 0x3B9448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9444u;
    // 0x3b9448: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9D60u, 0x3B9444u, 0x3B944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B944Cu;
label_3b944c:
    // 0x3b944c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b944cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9450: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B9450u;
    {
        const bool branch_taken_0x3b9450 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9450u;
        // 0x3b9454: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9450) {
            ctx->pc = 0x3B9478u;
            goto label_3b9478;
        }
    }
    ctx->pc = 0x3B9458u;
    // 0x3b9458: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3b9458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_3b945c:
    // 0x3b945c: 0x8c43c84c  lw          $v1, -0x37B4($v0)
    ctx->pc = 0x3b945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953036)));
    // 0x3b9460: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B9460u;
    {
        const bool branch_taken_0x3b9460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9460u;
        // 0x3b9464: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9460) {
            ctx->pc = 0x3B9470u;
            goto label_3b9470;
        }
    }
    ctx->pc = 0x3B9468u;
    // 0x3b9468: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3B9468u;
    SET_GPR_U32(ctx, 31, 0x3B9470u);
    ctx->pc = 0x3B946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9468u;
    // 0x3b946c: 0x24840938  addiu       $a0, $a0, 0x938 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3B9468u, 0x3B9470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9470u;
label_3b9470:
    // 0x3b9470: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B9470u;
    {
        const bool branch_taken_0x3b9470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9470u;
        // 0x3b9474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9470) {
            ctx->pc = 0x3B9480u;
            goto label_3b9480;
        }
    }
    ctx->pc = 0x3B9478u;
label_3b9478:
    // 0x3b9478: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b9478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b947c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x3b947cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_3b9480:
    // 0x3b9480: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x3b9480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3b9484: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x3b9484u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3b9488: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x3b9488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3b948c: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x3b948cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3b9490: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x3b9490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3b9494: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9494u;
        // 0x3b9498: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B949Cu;
    // 0x3b949c: 0x0  nop
    ctx->pc = 0x3b949cu;
    // NOP
    ctx->pc = 0x3b94a0u;
}
