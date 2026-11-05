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

// Function: sub_001FE2E0
// Address: 0x1fe2e0 - 0x1fe378
void sub_001FE2E0_0x1fe2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE2E0_0x1fe2e0");
#endif

    switch (ctx->pc) {
        case 0x1fe2e0u: goto label_1fe2e0;
        case 0x1fe2e4u: goto label_1fe2e4;
        case 0x1fe2e8u: goto label_1fe2e8;
        case 0x1fe2ecu: goto label_1fe2ec;
        case 0x1fe2f0u: goto label_1fe2f0;
        case 0x1fe2f4u: goto label_1fe2f4;
        case 0x1fe2f8u: goto label_1fe2f8;
        case 0x1fe2fcu: goto label_1fe2fc;
        case 0x1fe300u: goto label_1fe300;
        case 0x1fe304u: goto label_1fe304;
        case 0x1fe308u: goto label_1fe308;
        case 0x1fe30cu: goto label_1fe30c;
        case 0x1fe310u: goto label_1fe310;
        case 0x1fe314u: goto label_1fe314;
        case 0x1fe318u: goto label_1fe318;
        case 0x1fe31cu: goto label_1fe31c;
        case 0x1fe320u: goto label_1fe320;
        case 0x1fe324u: goto label_1fe324;
        case 0x1fe328u: goto label_1fe328;
        case 0x1fe32cu: goto label_1fe32c;
        case 0x1fe330u: goto label_1fe330;
        case 0x1fe334u: goto label_1fe334;
        case 0x1fe338u: goto label_1fe338;
        case 0x1fe33cu: goto label_1fe33c;
        case 0x1fe340u: goto label_1fe340;
        case 0x1fe344u: goto label_1fe344;
        case 0x1fe348u: goto label_1fe348;
        case 0x1fe34cu: goto label_1fe34c;
        case 0x1fe350u: goto label_1fe350;
        case 0x1fe354u: goto label_1fe354;
        case 0x1fe358u: goto label_1fe358;
        case 0x1fe35cu: goto label_1fe35c;
        case 0x1fe360u: goto label_1fe360;
        case 0x1fe364u: goto label_1fe364;
        case 0x1fe368u: goto label_1fe368;
        case 0x1fe36cu: goto label_1fe36c;
        case 0x1fe370u: goto label_1fe370;
        case 0x1fe374u: goto label_1fe374;
        default: break;
    }

    ctx->pc = 0x1fe2e0u;

label_1fe2e0:
    // 0x1fe2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fe2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fe2e4:
    // 0x1fe2e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1fe2e8:
    // 0x1fe2e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fe2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1fe2ec:
    // 0x1fe2ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe2ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fe2f0:
    // 0x1fe2f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fe2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fe2f4:
    // 0x1fe2f4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1fe2f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1fe2f8:
    // 0x1fe2f8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1fe2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1fe2fc:
    // 0x1fe2fc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1fe300:
    if (ctx->pc == 0x1FE300u) {
        ctx->pc = 0x1FE300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2FCu;
        // 0x1fe300: 0xa200004a  sb          $zero, 0x4A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE304u;
        goto label_1fe304;
    }
    ctx->pc = 0x1FE2FCu;
    {
        const bool branch_taken_0x1fe2fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe2fc) {
            ctx->pc = 0x1FE300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE2FCu;
            // 0x1fe300: 0xa200004a  sb          $zero, 0x4A($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE318u;
            goto label_1fe318;
        }
    }
    ctx->pc = 0x1FE304u;
label_1fe304:
    // 0x1fe304: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1fe304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fe308:
    // 0x1fe308: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1fe308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1fe30c:
    // 0x1fe30c: 0x40f809  jalr        $v0
label_1fe310:
    if (ctx->pc == 0x1FE310u) {
        ctx->pc = 0x1FE314u;
        goto label_1fe314;
    }
    ctx->pc = 0x1FE30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE314u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE30Cu, 0x1FE314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE314u;
label_1fe314:
    // 0x1fe314: 0xa200004a  sb          $zero, 0x4A($s0)
    ctx->pc = 0x1fe314u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 0));
label_1fe318:
    // 0x1fe318: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1fe318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fe31c:
    // 0x1fe31c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1fe31cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1fe320:
    // 0x1fe320: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1fe320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1fe324:
    // 0x1fe324: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fe324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fe328:
    // 0x1fe328: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1fe328u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1fe32c:
    // 0x1fe32c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fe32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1fe330:
    // 0x1fe330: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1fe330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1fe334:
    // 0x1fe334: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1fe334u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1fe338:
    // 0x1fe338: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1fe338u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_1fe33c:
    // 0x1fe33c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1fe33cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1fe340:
    // 0x1fe340: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fe340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe344:
    // 0x1fe344: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1fe348:
    if (ctx->pc == 0x1FE348u) {
        ctx->pc = 0x1FE348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE344u;
        // 0x1fe348: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE34Cu;
        goto label_1fe34c;
    }
    ctx->pc = 0x1FE344u;
    {
        const bool branch_taken_0x1fe344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE344u;
        // 0x1fe348: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe344) {
            ctx->pc = 0x1FE354u;
            goto label_1fe354;
        }
    }
    ctx->pc = 0x1FE34Cu;
label_1fe34c:
    // 0x1fe34c: 0xc08246e  jal         func_2091B8
label_1fe350:
    if (ctx->pc == 0x1FE350u) {
        ctx->pc = 0x1FE354u;
        goto label_1fe354;
    }
    ctx->pc = 0x1FE34Cu;
    SET_GPR_U32(ctx, 31, 0x1FE354u);
    ctx->pc = 0x2091B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2091B8u, 0x1FE34Cu, 0x1FE354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE354u;
label_1fe354:
    // 0x1fe354: 0x623fff4  bgezl       $s1, . + 4 + (-0xC << 2)
label_1fe358:
    if (ctx->pc == 0x1FE358u) {
        ctx->pc = 0x1FE358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE354u;
        // 0x1fe358: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE35Cu;
        goto label_1fe35c;
    }
    ctx->pc = 0x1FE354u;
    {
        const bool branch_taken_0x1fe354 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1fe354) {
            ctx->pc = 0x1FE358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE354u;
            // 0x1fe358: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe328;
        }
    }
    ctx->pc = 0x1FE35Cu;
label_1fe35c:
    // 0x1fe35c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe35cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe360:
    // 0x1fe360: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1fe364:
    // 0x1fe364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fe364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fe368:
    // 0x1fe368: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1fe368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fe36c:
    // 0x1fe36c: 0x3e00008  jr          $ra
label_1fe370:
    if (ctx->pc == 0x1FE370u) {
        ctx->pc = 0x1FE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE36Cu;
        // 0x1fe370: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE374u;
        goto label_1fe374;
    }
    ctx->pc = 0x1FE36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE36Cu;
        // 0x1fe370: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE374u;
label_1fe374:
    // 0x1fe374: 0x0  nop
    ctx->pc = 0x1fe374u;
    // NOP
    ctx->pc = 0x1fe378u;
}
