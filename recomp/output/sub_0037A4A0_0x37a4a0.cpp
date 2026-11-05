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

// Function: sub_0037A4A0
// Address: 0x37a4a0 - 0x37a590
void sub_0037A4A0_0x37a4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A4A0_0x37a4a0");
#endif

    switch (ctx->pc) {
        case 0x37a4e8u: goto label_37a4e8;
        case 0x37a534u: goto label_37a534;
        case 0x37a548u: goto label_37a548;
        default: break;
    }

    ctx->pc = 0x37a4a0u;

    // 0x37a4a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37a4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37a4a4: 0x3c026c09  lui         $v0, 0x6C09
    ctx->pc = 0x37a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27657 << 16));
    // 0x37a4a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37a4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37a4ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x37a4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x37a4b0: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x37a4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x37a4b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x37a4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x37a4b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x37a4b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a4bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x37a4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x37a4c0: 0x2612f910  addiu       $s2, $s0, -0x6F0
    ctx->pc = 0x37a4c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    // 0x37a4c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37a4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37a4c8: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x37a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BF910u));
    // 0x37a4cc: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x37a4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5BF914u));
    // 0x37a4d0: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x37a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x37a4d4: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x37a4d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x37a4d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37A4D8u;
    {
        const bool branch_taken_0x37a4d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A4D8u;
        // 0x37a4dc: 0x829825  or          $s3, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a4d8) {
            ctx->pc = 0x37A4E8u;
            goto label_37a4e8;
        }
    }
    ctx->pc = 0x37A4E0u;
    // 0x37a4e0: 0xc0dc442  jal         func_371108
    ctx->pc = 0x37A4E0u;
    SET_GPR_U32(ctx, 31, 0x37A4E8u);
    ctx->pc = 0x37A4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A4E0u;
    // 0x37a4e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x37A4E0u, 0x37A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A4E8u;
label_37a4e8:
    // 0x37a4e8: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x37a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x37a4ec: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x37a4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x37a4f0: 0x34a50009  ori         $a1, $a1, 0x9
    ctx->pc = 0x37a4f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9);
    // 0x37a4f4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x37a4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x37a4f8: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x37a4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x37a4fc: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x37a4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x37a500: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x37a500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x37a504: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x37a504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x37a508: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x37a508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x37a50c: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x37a50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x37a510: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x37a510u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x37a514: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x37a514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x37a518: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x37a518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x37a51c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x37a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x37a520: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x37a520u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x37a524: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x37A524u;
    {
        const bool branch_taken_0x37a524 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x37a524) {
            ctx->pc = 0x37A528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37A524u;
            // 0x37a528: 0x8e03f910  lw          $v1, -0x6F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37A538u;
            goto label_37a538;
        }
    }
    ctx->pc = 0x37A52Cu;
    // 0x37a52c: 0xc0dc442  jal         func_371108
    ctx->pc = 0x37A52Cu;
    SET_GPR_U32(ctx, 31, 0x37A534u);
    ctx->pc = 0x37A530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A52Cu;
    // 0x37a530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x37A52Cu, 0x37A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A534u;
label_37a534:
    // 0x37a534: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x37a534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
label_37a538:
    // 0x37a538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37a538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a53c: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x37a53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x37a540: 0x24620090  addiu       $v0, $v1, 0x90
    ctx->pc = 0x37a540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x37a544: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x37a544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
label_37a548:
    // 0x37a548: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x37a548u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37a54c: 0x78860010  lq          $a2, 0x10($a0)
    ctx->pc = 0x37a54cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x37a550: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x37a550u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x37a554: 0x7c660010  sq          $a2, 0x10($v1)
    ctx->pc = 0x37a554u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 6));
    // 0x37a558: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x37a558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x37a55c: 0x1485fffa  bne         $a0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x37A55Cu;
    {
        const bool branch_taken_0x37a55c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x37A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A55Cu;
        // 0x37a560: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a55c) {
            ctx->pc = 0x37A548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a548;
        }
    }
    ctx->pc = 0x37A564u;
    // 0x37a564: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x37a564u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37a568: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x37a568u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x37a56c: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x37a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x37a570: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x37a570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x37a574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37a574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a578: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x37a578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37a57c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x37a57cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a580: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x37a580u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37a584: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37a584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37a588: 0x3e00008  jr          $ra
    ctx->pc = 0x37A588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A588u;
        // 0x37a58c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A590u;
}
