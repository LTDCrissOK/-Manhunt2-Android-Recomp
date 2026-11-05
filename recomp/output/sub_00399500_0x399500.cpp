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

// Function: sub_00399500
// Address: 0x399500 - 0x3995e8
void sub_00399500_0x399500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399500_0x399500");
#endif

    switch (ctx->pc) {
        case 0x399570u: goto label_399570;
        case 0x3995c8u: goto label_3995c8;
        default: break;
    }

    ctx->pc = 0x399500u;

    // 0x399500: 0x3c0d0041  lui         $t5, 0x41
    ctx->pc = 0x399500u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65 << 16));
    // 0x399504: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399504u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x399508: 0x8da99ce8  lw          $t1, -0x6318($t5)
    ctx->pc = 0x399508u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x409CE8u));
    // 0x39950c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x39950cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399510: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x399510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399514: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x399514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399518: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x399518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x39951c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x39951cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399520: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x399520u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399524: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x399524u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399528: 0x1920001f  blez        $t1, . + 4 + (0x1F << 2)
    ctx->pc = 0x399528u;
    {
        const bool branch_taken_0x399528 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x39952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399528u;
        // 0x39952c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399528) {
            ctx->pc = 0x3995A8u;
            goto label_3995a8;
        }
    }
    ctx->pc = 0x399530u;
    // 0x399530: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x399530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x399534: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x399534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x399538: 0x24479ce4  addiu       $a3, $v0, -0x631C
    ctx->pc = 0x399538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941924));
    // 0x39953c: 0x24849d00  addiu       $a0, $a0, -0x6300
    ctx->pc = 0x39953cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941952));
    // 0x399540: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x399540u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x409CE4u));
    // 0x399544: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x399544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x399548: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x399548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39954c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39954cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x399550: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x399550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x399554: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x399554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x399558: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x399558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x39955c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x39955cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x399560: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x399560u;
    {
        const bool branch_taken_0x399560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x399564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399560u;
        // 0x399564: 0x8da39ce8  lw          $v1, -0x6318($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294941928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399560) {
            ctx->pc = 0x3995ACu;
            goto label_3995ac;
        }
    }
    ctx->pc = 0x399568u;
    // 0x399568: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x399568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39956c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x39956cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_399570:
    // 0x399570: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x399570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x399574: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x399574u;
    {
        const bool branch_taken_0x399574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399574u;
        // 0x399578: 0x8da39ce8  lw          $v1, -0x6318($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294941928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399574) {
            ctx->pc = 0x3995ACu;
            goto label_3995ac;
        }
    }
    ctx->pc = 0x39957Cu;
    // 0x39957c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x39957cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x399580: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x399580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x399584: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x399584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x399588: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x399588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39958c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39958cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x399590: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x399590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x399594: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x399594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x399598: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x399598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x39959c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x39959cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3995a0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x3995A0u;
    {
        const bool branch_taken_0x3995a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3995a0) {
            ctx->pc = 0x3995A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3995A0u;
            // 0x3995a4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399570;
        }
    }
    ctx->pc = 0x3995A8u;
label_3995a8:
    // 0x3995a8: 0x8da39ce8  lw          $v1, -0x6318($t5)
    ctx->pc = 0x3995a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294941928)));
label_3995ac:
    // 0x3995ac: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3995ACu;
    {
        const bool branch_taken_0x3995ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3995B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3995ACu;
        // 0x3995b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3995ac) {
            ctx->pc = 0x3995D4u;
            goto label_3995d4;
        }
    }
    ctx->pc = 0x3995B4u;
    // 0x3995b4: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x3995b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3995b8: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x3995b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3995bc: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x3995bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3995c0: 0xc0e64fe  jal         func_3993F8
    ctx->pc = 0x3995C0u;
    SET_GPR_U32(ctx, 31, 0x3995C8u);
    ctx->pc = 0x3995C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3995C0u;
    // 0x3995c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3993F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3993F8u, 0x3995C0u, 0x3995C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3995C8u;
label_3995c8:
    // 0x3995c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3995c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3995cc: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x3995ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3995d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3995d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3995d4:
    // 0x3995d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3995d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3995d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3995d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3995dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3995DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3995E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3995DCu;
        // 0x3995e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3995DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3995E4u;
    // 0x3995e4: 0x0  nop
    ctx->pc = 0x3995e4u;
    // NOP
    ctx->pc = 0x3995e8u;
}
