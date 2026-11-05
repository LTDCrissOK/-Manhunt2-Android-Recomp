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

// Function: sub_001E9260
// Address: 0x1e9260 - 0x1e9338
void sub_001E9260_0x1e9260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9260_0x1e9260");
#endif

    switch (ctx->pc) {
        case 0x1e92a8u: goto label_1e92a8;
        case 0x1e92b0u: goto label_1e92b0;
        case 0x1e92c4u: goto label_1e92c4;
        case 0x1e92dcu: goto label_1e92dc;
        default: break;
    }

    ctx->pc = 0x1e9260u;

    // 0x1e9260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e9260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e9264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e9264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e9268: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e9268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e926c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e926cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9270: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e9270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e9274: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e9274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9278: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e9278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e927c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e927cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9280: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e9280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1e9284: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e9284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9288: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1e9288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1e928c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e928cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e9290: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e9290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e9294: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E9294u;
    {
        const bool branch_taken_0x1e9294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9294u;
        // 0x1e9298: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9294) {
            ctx->pc = 0x1E9308u;
            goto label_1e9308;
        }
    }
    ctx->pc = 0x1E929Cu;
    // 0x1e929c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1e929cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e92a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e92a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92a4: 0x0  nop
    ctx->pc = 0x1e92a4u;
    // NOP
label_1e92a8:
    // 0x1e92a8: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E92A8u;
    SET_GPR_U32(ctx, 31, 0x1E92B0u);
    ctx->pc = 0x1E92ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E92A8u;
    // 0x1e92ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E92A8u, 0x1E92B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E92B0u;
label_1e92b0:
    // 0x1e92b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e92b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e92b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e92b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92bc: 0xc0788c0  jal         func_1E2300
    ctx->pc = 0x1E92BCu;
    SET_GPR_U32(ctx, 31, 0x1E92C4u);
    ctx->pc = 0x1E92C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E92BCu;
    // 0x1e92c0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2300u, 0x1E92BCu, 0x1E92C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E92C4u;
label_1e92c4:
    // 0x1e92c4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E92C4u;
    {
        const bool branch_taken_0x1e92c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E92C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E92C4u;
        // 0x1e92c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92c4) {
            ctx->pc = 0x1E92F4u;
            goto label_1e92f4;
        }
    }
    ctx->pc = 0x1E92CCu;
    // 0x1e92cc: 0xae330024  sw          $s3, 0x24($s1)
    ctx->pc = 0x1e92ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 19));
    // 0x1e92d0: 0xae350028  sw          $s5, 0x28($s1)
    ctx->pc = 0x1e92d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 21));
    // 0x1e92d4: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E92D4u;
    SET_GPR_U32(ctx, 31, 0x1E92DCu);
    ctx->pc = 0x1E92D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E92D4u;
    // 0x1e92d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E92D4u, 0x1E92DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E92DCu;
label_1e92dc:
    // 0x1e92dc: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x1e92dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x1e92e0: 0xae350030  sw          $s5, 0x30($s1)
    ctx->pc = 0x1e92e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 21));
    // 0x1e92e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e92e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e92e8: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1e92e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e92ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E92ECu;
    {
        const bool branch_taken_0x1e92ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E92F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E92ECu;
        // 0x1e92f0: 0xe6200020  swc1        $f0, 0x20($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92ec) {
            ctx->pc = 0x1E930Cu;
            goto label_1e930c;
        }
    }
    ctx->pc = 0x1E92F4u;
label_1e92f4:
    // 0x1e92f4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e92f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e92f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e92f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e92fc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e92fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e9300: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1E9300u;
    {
        const bool branch_taken_0x1e9300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9300) {
            ctx->pc = 0x1E92A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e92a8;
        }
    }
    ctx->pc = 0x1E9308u;
label_1e9308:
    // 0x1e9308: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e930c:
    // 0x1e930c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e930cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9310: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e9310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e9314: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e9314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9318: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e9318u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e931c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e931cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9320: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1e9320u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e9324: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e9324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9328: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9328u;
        // 0x1e932c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9330u;
    // 0x1e9330: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e9330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e9334: 0x0  nop
    ctx->pc = 0x1e9334u;
    // NOP
    ctx->pc = 0x1e9338u;
}
