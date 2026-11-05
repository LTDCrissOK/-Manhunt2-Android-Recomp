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

// Function: sub_001AB8E0
// Address: 0x1ab8e0 - 0x1ab9b0
void sub_001AB8E0_0x1ab8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB8E0_0x1ab8e0");
#endif

    switch (ctx->pc) {
        case 0x1ab920u: goto label_1ab920;
        case 0x1ab968u: goto label_1ab968;
        case 0x1ab97cu: goto label_1ab97c;
        case 0x1ab990u: goto label_1ab990;
        default: break;
    }

    ctx->pc = 0x1ab8e0u;

    // 0x1ab8e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ab8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ab8e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ab8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ab8e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab8ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ab8ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab8f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ab8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ab8f4: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x1ab8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x1ab8f8: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x1ab8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x1ab8fc: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x1ab8fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1ab900: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1AB900u;
    {
        const bool branch_taken_0x1ab900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB900u;
        // 0x1ab904: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab900) {
            ctx->pc = 0x1AB984u;
            goto label_1ab984;
        }
    }
    ctx->pc = 0x1AB908u;
    // 0x1ab908: 0x8e2201e4  lw          $v0, 0x1E4($s1)
    ctx->pc = 0x1ab908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1ab90c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ab90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab910: 0x9450002a  lhu         $s0, 0x2A($v0)
    ctx->pc = 0x1ab910u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x1ab914: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1ab914u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1ab918: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB918u;
    SET_GPR_U32(ctx, 31, 0x1AB920u);
    ctx->pc = 0x1AB91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB918u;
    // 0x1ab91c: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB918u, 0x1AB920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB920u;
label_1ab920:
    // 0x1ab920: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1AB920u;
    {
        const bool branch_taken_0x1ab920 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB920u;
        // 0x1ab924: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab920) {
            ctx->pc = 0x1AB998u;
            goto label_1ab998;
        }
    }
    ctx->pc = 0x1AB928u;
    // 0x1ab928: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x1ab928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1ab92c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB92Cu;
    {
        const bool branch_taken_0x1ab92c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AB930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB92Cu;
        // 0x1ab930: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab92c) {
            ctx->pc = 0x1AB950u;
            goto label_1ab950;
        }
    }
    ctx->pc = 0x1AB934u;
    // 0x1ab934: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x1ab934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1ab938: 0x24020796  addiu       $v0, $zero, 0x796
    ctx->pc = 0x1ab938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1942));
    // 0x1ab93c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB93Cu;
    {
        const bool branch_taken_0x1ab93c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AB940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB93Cu;
        // 0x1ab940: 0x24020799  addiu       $v0, $zero, 0x799 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1945));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab93c) {
            ctx->pc = 0x1AB94Cu;
            goto label_1ab94c;
        }
    }
    ctx->pc = 0x1AB944u;
    // 0x1ab944: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB944u;
    {
        const bool branch_taken_0x1ab944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab944) {
            ctx->pc = 0x1AB950u;
            goto label_1ab950;
        }
    }
    ctx->pc = 0x1AB94Cu;
label_1ab94c:
    // 0x1ab94c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ab94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab950:
    // 0x1ab950: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AB950u;
    {
        const bool branch_taken_0x1ab950 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB950u;
        // 0x1ab954: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab950) {
            ctx->pc = 0x1AB99Cu;
            goto label_1ab99c;
        }
    }
    ctx->pc = 0x1AB958u;
    // 0x1ab958: 0x8e2401e4  lw          $a0, 0x1E4($s1)
    ctx->pc = 0x1ab958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1ab95c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1ab95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ab960: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x1AB960u;
    SET_GPR_U32(ctx, 31, 0x1AB968u);
    ctx->pc = 0x1AB964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB960u;
    // 0x1ab964: 0xc44c0010  lwc1        $f12, 0x10($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x1AB960u, 0x1AB968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB968u;
label_1ab968:
    // 0x1ab968: 0x8e2401e4  lw          $a0, 0x1E4($s1)
    ctx->pc = 0x1ab968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1ab96c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1ab96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1ab970: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ab970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab974: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1AB974u;
    SET_GPR_U32(ctx, 31, 0x1AB97Cu);
    ctx->pc = 0x1AB978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB974u;
    // 0x1ab978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1AB974u, 0x1AB97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB97Cu;
label_1ab97c:
    // 0x1ab97c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB97Cu;
    {
        const bool branch_taken_0x1ab97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB97Cu;
        // 0x1ab980: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab97c) {
            ctx->pc = 0x1AB99Cu;
            goto label_1ab99c;
        }
    }
    ctx->pc = 0x1AB984u;
label_1ab984:
    // 0x1ab984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab988: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB988u;
    SET_GPR_U32(ctx, 31, 0x1AB990u);
    ctx->pc = 0x1AB98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB988u;
    // 0x1ab98c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB988u, 0x1AB990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB990u;
label_1ab990:
    // 0x1ab990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab994: 0xae220190  sw          $v0, 0x190($s1)
    ctx->pc = 0x1ab994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 2));
label_1ab998:
    // 0x1ab998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab99c:
    // 0x1ab99c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab99cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab9a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ab9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9A4u;
        // 0x1ab9a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB9ACu;
    // 0x1ab9ac: 0x0  nop
    ctx->pc = 0x1ab9acu;
    // NOP
    ctx->pc = 0x1ab9b0u;
}
