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

// Function: sub_003995E8
// Address: 0x3995e8 - 0x3996c8
void sub_003995E8_0x3995e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003995E8_0x3995e8");
#endif

    switch (ctx->pc) {
        case 0x399658u: goto label_399658;
        case 0x3996b0u: goto label_3996b0;
        default: break;
    }

    ctx->pc = 0x3995e8u;

    // 0x3995e8: 0x3c0d0041  lui         $t5, 0x41
    ctx->pc = 0x3995e8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65 << 16));
    // 0x3995ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3995ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3995f0: 0x8da99cf0  lw          $t1, -0x6310($t5)
    ctx->pc = 0x3995f0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x409CF0u));
    // 0x3995f4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3995f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3995f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3995f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3995fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3995fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399600: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x399600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x399604: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x399604u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399608: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x399608u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39960c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x39960cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399610: 0x1920001f  blez        $t1, . + 4 + (0x1F << 2)
    ctx->pc = 0x399610u;
    {
        const bool branch_taken_0x399610 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x399614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399610u;
        // 0x399614: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399610) {
            ctx->pc = 0x399690u;
            goto label_399690;
        }
    }
    ctx->pc = 0x399618u;
    // 0x399618: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x399618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x39961c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x39961cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x399620: 0x24479cec  addiu       $a3, $v0, -0x6314
    ctx->pc = 0x399620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941932));
    // 0x399624: 0x24849d00  addiu       $a0, $a0, -0x6300
    ctx->pc = 0x399624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941952));
    // 0x399628: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x399628u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x409CECu));
    // 0x39962c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x39962cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x399630: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x399630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x399634: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x399634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x399638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x399638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39963c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x39963cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x399640: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x399640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x399644: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x399644u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x399648: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x399648u;
    {
        const bool branch_taken_0x399648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399648u;
        // 0x39964c: 0x8da39cf0  lw          $v1, -0x6310($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294941936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399648) {
            ctx->pc = 0x399694u;
            goto label_399694;
        }
    }
    ctx->pc = 0x399650u;
    // 0x399650: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x399650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399654: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x399654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_399658:
    // 0x399658: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x399658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x39965c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x39965Cu;
    {
        const bool branch_taken_0x39965c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39965Cu;
        // 0x399660: 0x8da39cf0  lw          $v1, -0x6310($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294941936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39965c) {
            ctx->pc = 0x399694u;
            goto label_399694;
        }
    }
    ctx->pc = 0x399664u;
    // 0x399664: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x399664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x399668: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x399668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x39966c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x39966cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x399670: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x399670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x399674: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x399674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x399678: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x399678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39967c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x39967cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x399680: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x399680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x399684: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x399684u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x399688: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x399688u;
    {
        const bool branch_taken_0x399688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x399688) {
            ctx->pc = 0x39968Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399688u;
            // 0x39968c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399658;
        }
    }
    ctx->pc = 0x399690u;
label_399690:
    // 0x399690: 0x8da39cf0  lw          $v1, -0x6310($t5)
    ctx->pc = 0x399690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294941936)));
label_399694:
    // 0x399694: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x399694u;
    {
        const bool branch_taken_0x399694 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x399698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399694u;
        // 0x399698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399694) {
            ctx->pc = 0x3996B8u;
            goto label_3996b8;
        }
    }
    ctx->pc = 0x39969Cu;
    // 0x39969c: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x39969cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3996a0: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x3996a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3996a4: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x3996a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3996a8: 0xc0e64fe  jal         func_3993F8
    ctx->pc = 0x3996A8u;
    SET_GPR_U32(ctx, 31, 0x3996B0u);
    ctx->pc = 0x3996ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3996A8u;
    // 0x3996ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3993F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3993F8u, 0x3996A8u, 0x3996B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3996B0u;
label_3996b0:
    // 0x3996b0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3996b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3996b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3996b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3996b8:
    // 0x3996b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3996b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3996bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3996bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3996c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3996C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3996C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996C0u;
        // 0x3996c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3996C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3996C8u;
}
