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

// Function: sub_001E9420
// Address: 0x1e9420 - 0x1e94f0
void sub_001E9420_0x1e9420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9420_0x1e9420");
#endif

    switch (ctx->pc) {
        case 0x1e944cu: goto label_1e944c;
        case 0x1e9464u: goto label_1e9464;
        case 0x1e9490u: goto label_1e9490;
        case 0x1e94acu: goto label_1e94ac;
        default: break;
    }

    ctx->pc = 0x1e9420u;

    // 0x1e9420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e9420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e9424: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e9424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e9428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e9428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e942c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e942cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e9430: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e9430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e9434: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e9434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1e9438: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1e9438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1e943c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1e943cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1e9440: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1e9440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1e9444: 0xc07a7d8  jal         func_1E9F60
    ctx->pc = 0x1E9444u;
    SET_GPR_U32(ctx, 31, 0x1E944Cu);
    ctx->pc = 0x1E9448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9444u;
    // 0x1e9448: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9F60u, 0x1E9444u, 0x1E944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E944Cu;
label_1e944c:
    // 0x1e944c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E944Cu;
    {
        const bool branch_taken_0x1e944c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E944Cu;
        // 0x1e9450: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e944c) {
            ctx->pc = 0x1E945Cu;
            goto label_1e945c;
        }
    }
    ctx->pc = 0x1E9454u;
    // 0x1e9454: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1E9454u;
    {
        const bool branch_taken_0x1e9454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9454u;
        // 0x1e9458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9454) {
            ctx->pc = 0x1E94C4u;
            goto label_1e94c4;
        }
    }
    ctx->pc = 0x1E945Cu;
label_1e945c:
    // 0x1e945c: 0xc07a768  jal         func_1E9DA0
    ctx->pc = 0x1E945Cu;
    SET_GPR_U32(ctx, 31, 0x1E9464u);
    ctx->pc = 0x1E9460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E945Cu;
    // 0x1e9460: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9DA0u, 0x1E945Cu, 0x1E9464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9464u;
label_1e9464:
    // 0x1e9464: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1e9464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1e9468: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1e9468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1e946c: 0x8c8291f4  lw          $v0, -0x6E0C($a0)
    ctx->pc = 0x1e946cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91F4u));
    // 0x1e9470: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e9470u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9474: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x1e9474u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9478: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E9478u;
    {
        const bool branch_taken_0x1e9478 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9478u;
        // 0x1e947c: 0x8c742b1c  lw          $s4, 0x2B1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9478) {
            ctx->pc = 0x1E94BCu;
            goto label_1e94bc;
        }
    }
    ctx->pc = 0x1E9480u;
    // 0x1e9480: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1e9480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1e9484: 0x3c13001f  lui         $s3, 0x1F
    ctx->pc = 0x1e9484u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)31 << 16));
    // 0x1e9488: 0x2451c758  addiu       $s1, $v0, -0x38A8
    ctx->pc = 0x1e9488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952792));
    // 0x1e948c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1e948cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x66C758u));
label_1e9490:
    // 0x1e9490: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e9490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9494: 0x266794f0  addiu       $a3, $s3, -0x6B10
    ctx->pc = 0x1e9494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939888));
    // 0x1e9498: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1e9498u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e949c: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x1e949cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1e94a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e94a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e94a4: 0xc0dbe70  jal         func_36F9C0
    ctx->pc = 0x1E94A4u;
    SET_GPR_U32(ctx, 31, 0x1E94ACu);
    ctx->pc = 0x1E94A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E94A4u;
    // 0x1e94a8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F9C0u, 0x1E94A4u, 0x1E94ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E94ACu;
label_1e94ac:
    // 0x1e94ac: 0x8ea391f4  lw          $v1, -0x6E0C($s5)
    ctx->pc = 0x1e94acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939124)));
    // 0x1e94b0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1e94b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e94b4: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E94B4u;
    {
        const bool branch_taken_0x1e94b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e94b4) {
            ctx->pc = 0x1E94B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E94B4u;
            // 0x1e94b8: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9490;
        }
    }
    ctx->pc = 0x1E94BCu;
label_1e94bc:
    // 0x1e94bc: 0x8ec22b1c  lw          $v0, 0x2B1C($s6)
    ctx->pc = 0x1e94bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11036)));
    // 0x1e94c0: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1e94c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e94c4:
    // 0x1e94c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e94c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e94c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e94c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e94cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e94ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e94d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e94d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e94d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e94d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e94d8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1e94d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e94dc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1e94dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e94e0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1e94e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e94e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E94E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E94E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E94E4u;
        // 0x1e94e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E94E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E94ECu;
    // 0x1e94ec: 0x0  nop
    ctx->pc = 0x1e94ecu;
    // NOP
    ctx->pc = 0x1e94f0u;
}
