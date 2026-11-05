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

// Function: sub_00273948
// Address: 0x273948 - 0x273a08
void sub_00273948_0x273948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273948_0x273948");
#endif

    switch (ctx->pc) {
        case 0x273988u: goto label_273988;
        case 0x273994u: goto label_273994;
        case 0x2739b0u: goto label_2739b0;
        case 0x2739bcu: goto label_2739bc;
        case 0x2739d4u: goto label_2739d4;
        case 0x2739e0u: goto label_2739e0;
        case 0x2739ecu: goto label_2739ec;
        default: break;
    }

    ctx->pc = 0x273948u;

    // 0x273948: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x273948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27394c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x27394cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x273950: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x273950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x273954: 0x24422b00  addiu       $v0, $v0, 0x2B00
    ctx->pc = 0x273954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11008));
    // 0x273958: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x273958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27395c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27395cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273960: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x273960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x273964: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x273964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x273968: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x273968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27396c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27396cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273970: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x273970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x273974: 0x26241e88  addiu       $a0, $s1, 0x1E88
    ctx->pc = 0x273974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7816));
    // 0x273978: 0xae220218  sw          $v0, 0x218($s1)
    ctx->pc = 0x273978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 2));
    // 0x27397c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27397cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x273980: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x273980u;
    SET_GPR_U32(ctx, 31, 0x273988u);
    ctx->pc = 0x273984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273980u;
    // 0x273984: 0xa0609dfc  sb          $zero, -0x6204($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294942204), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x273980u, 0x273988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273988u;
label_273988:
    // 0x273988: 0x26241e80  addiu       $a0, $s1, 0x1E80
    ctx->pc = 0x273988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7808));
    // 0x27398c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x27398Cu;
    SET_GPR_U32(ctx, 31, 0x273994u);
    ctx->pc = 0x273990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27398Cu;
    // 0x273990: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x27398Cu, 0x273994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273994u;
label_273994:
    // 0x273994: 0x262203b0  addiu       $v0, $s1, 0x3B0
    ctx->pc = 0x273994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
    // 0x273998: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x273998u;
    {
        const bool branch_taken_0x273998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273998u;
        // 0x27399c: 0x26301a30  addiu       $s0, $s1, 0x1A30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 6704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273998) {
            ctx->pc = 0x2739C8u;
            goto label_2739c8;
        }
    }
    ctx->pc = 0x2739A0u;
    // 0x2739a0: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2739A0u;
    {
        const bool branch_taken_0x2739a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2739A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739A0u;
        // 0x2739a4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739a0) {
            ctx->pc = 0x2739C8u;
            goto label_2739c8;
        }
    }
    ctx->pc = 0x2739A8u;
    // 0x2739a8: 0x2610ff70  addiu       $s0, $s0, -0x90
    ctx->pc = 0x2739a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967152));
    // 0x2739ac: 0x0  nop
    ctx->pc = 0x2739acu;
    // NOP
label_2739b0:
    // 0x2739b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2739b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2739b4: 0xc09d58a  jal         func_275628
    ctx->pc = 0x2739B4u;
    SET_GPR_U32(ctx, 31, 0x2739BCu);
    ctx->pc = 0x2739B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2739B4u;
    // 0x2739b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275628u, 0x2739B4u, 0x2739BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2739BCu;
label_2739bc:
    // 0x2739bc: 0x0  nop
    ctx->pc = 0x2739bcu;
    // NOP
    // 0x2739c0: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2739C0u;
    {
        const bool branch_taken_0x2739c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x2739C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739C0u;
        // 0x2739c4: 0x2610ff70  addiu       $s0, $s0, -0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739c0) {
            ctx->pc = 0x2739B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2739b0;
        }
    }
    ctx->pc = 0x2739C8u;
label_2739c8:
    // 0x2739c8: 0x26240230  addiu       $a0, $s1, 0x230
    ctx->pc = 0x2739c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x2739cc: 0xc09ca52  jal         func_272948
    ctx->pc = 0x2739CCu;
    SET_GPR_U32(ctx, 31, 0x2739D4u);
    ctx->pc = 0x2739D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2739CCu;
    // 0x2739d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272948u, 0x2739CCu, 0x2739D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2739D4u;
label_2739d4:
    // 0x2739d4: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x2739d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x2739d8: 0xc09cdd8  jal         func_273760
    ctx->pc = 0x2739D8u;
    SET_GPR_U32(ctx, 31, 0x2739E0u);
    ctx->pc = 0x2739DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2739D8u;
    // 0x2739dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273760u, 0x2739D8u, 0x2739E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2739E0u;
label_2739e0:
    // 0x2739e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2739e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2739e4: 0xc0836c2  jal         func_20DB08
    ctx->pc = 0x2739E4u;
    SET_GPR_U32(ctx, 31, 0x2739ECu);
    ctx->pc = 0x2739E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2739E4u;
    // 0x2739e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB08u, 0x2739E4u, 0x2739ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2739ECu;
label_2739ec:
    // 0x2739ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2739ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2739f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2739f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2739f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2739f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2739f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2739f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2739fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2739fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273a00: 0x3e00008  jr          $ra
    ctx->pc = 0x273A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A00u;
        // 0x273a04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273A08u;
}
