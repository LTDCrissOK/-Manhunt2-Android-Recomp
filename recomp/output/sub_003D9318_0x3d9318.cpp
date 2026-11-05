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

// Function: sub_003D9318
// Address: 0x3d9318 - 0x3d93c8
void sub_003D9318_0x3d9318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9318_0x3d9318");
#endif

    switch (ctx->pc) {
        case 0x3d9350u: goto label_3d9350;
        case 0x3d938cu: goto label_3d938c;
        case 0x3d93a8u: goto label_3d93a8;
        default: break;
    }

    ctx->pc = 0x3d9318u;

    // 0x3d9318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d9318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d931c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3d931cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3d9320: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d9320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d9324: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3d9324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9328: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3d9328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3d932c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d932cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9330: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3d9330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3d9334: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x3d9334u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9338: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x3d9338u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3d933c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D933Cu;
    {
        const bool branch_taken_0x3d933c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D933Cu;
        // 0x3d9340: 0x30b100ff  andi        $s1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d933c) {
            ctx->pc = 0x3D9358u;
            goto label_3d9358;
        }
    }
    ctx->pc = 0x3D9344u;
    // 0x3d9344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9348: 0xc0f63e8  jal         func_3D8FA0
    ctx->pc = 0x3D9348u;
    SET_GPR_U32(ctx, 31, 0x3D9350u);
    ctx->pc = 0x3D934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9348u;
    // 0x3d934c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8FA0u, 0x3D9348u, 0x3D9350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9350u;
label_3d9350:
    // 0x3d9350: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9350u;
    {
        const bool branch_taken_0x3d9350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d9350) {
            ctx->pc = 0x3D9354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9350u;
            // 0x3d9354: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9360u;
            goto label_3d9360;
        }
    }
    ctx->pc = 0x3D9358u;
label_3d9358:
    // 0x3d9358: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3D9358u;
    {
        const bool branch_taken_0x3d9358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9358u;
        // 0x3d935c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9358) {
            ctx->pc = 0x3D93ACu;
            goto label_3d93ac;
        }
    }
    ctx->pc = 0x3D9360u;
label_3d9360:
    // 0x3d9360: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9360u;
    {
        const bool branch_taken_0x3d9360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9360u;
        // 0x3d9364: 0x2c42000c  sltiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9360) {
            ctx->pc = 0x3D9370u;
            goto label_3d9370;
        }
    }
    ctx->pc = 0x3D9368u;
    // 0x3d9368: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3D9368u;
    {
        const bool branch_taken_0x3d9368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9368u;
        // 0x3d936c: 0xa6400000  sh          $zero, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9368) {
            ctx->pc = 0x3D93A8u;
            goto label_3d93a8;
        }
    }
    ctx->pc = 0x3D9370u;
label_3d9370:
    // 0x3d9370: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D9370u;
    {
        const bool branch_taken_0x3d9370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9370u;
        // 0x3d9374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9370) {
            ctx->pc = 0x3D9394u;
            goto label_3d9394;
        }
    }
    ctx->pc = 0x3D9378u;
    // 0x3d9378: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d9378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d937c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d937cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9380: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d9380u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9384: 0xc0f6434  jal         func_3D90D0
    ctx->pc = 0x3D9384u;
    SET_GPR_U32(ctx, 31, 0x3D938Cu);
    ctx->pc = 0x3D9388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9384u;
    // 0x3d9388: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D90D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D90D0u, 0x3D9384u, 0x3D938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D938Cu;
label_3d938c:
    // 0x3d938c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D938Cu;
    {
        const bool branch_taken_0x3d938c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D938Cu;
        // 0x3d9390: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d938c) {
            ctx->pc = 0x3D93ACu;
            goto label_3d93ac;
        }
    }
    ctx->pc = 0x3D9394u;
label_3d9394:
    // 0x3d9394: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d9394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9398: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d9398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d939c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d939cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d93a0: 0xc0f64a4  jal         func_3D9290
    ctx->pc = 0x3D93A0u;
    SET_GPR_U32(ctx, 31, 0x3D93A8u);
    ctx->pc = 0x3D93A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D93A0u;
    // 0x3d93a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9290u, 0x3D93A0u, 0x3D93A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D93A8u;
label_3d93a8:
    // 0x3d93a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d93ac:
    // 0x3d93ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d93acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d93b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3d93b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d93b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3d93b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d93b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3d93b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3d93bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3D93BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D93C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D93BCu;
        // 0x3d93c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D93BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D93C4u;
    // 0x3d93c4: 0x0  nop
    ctx->pc = 0x3d93c4u;
    // NOP
    ctx->pc = 0x3d93c8u;
}
