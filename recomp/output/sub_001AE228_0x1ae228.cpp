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

// Function: sub_001AE228
// Address: 0x1ae228 - 0x1ae2f0
void sub_001AE228_0x1ae228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE228_0x1ae228");
#endif

    switch (ctx->pc) {
        case 0x1ae240u: goto label_1ae240;
        case 0x1ae248u: goto label_1ae248;
        case 0x1ae25cu: goto label_1ae25c;
        case 0x1ae284u: goto label_1ae284;
        case 0x1ae29cu: goto label_1ae29c;
        case 0x1ae2d4u: goto label_1ae2d4;
        default: break;
    }

    ctx->pc = 0x1ae228u;

    // 0x1ae228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ae228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ae22c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ae230: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ae230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ae234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ae234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ae238: 0xc06c4f4  jal         func_1B13D0
    ctx->pc = 0x1AE238u;
    SET_GPR_U32(ctx, 31, 0x1AE240u);
    ctx->pc = 0x1AE23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE238u;
    // 0x1ae23c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B13D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B13D0u, 0x1AE238u, 0x1AE240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE240u;
label_1ae240:
    // 0x1ae240: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1AE240u;
    SET_GPR_U32(ctx, 31, 0x1AE248u);
    ctx->pc = 0x1AE244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE240u;
    // 0x1ae244: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1AE240u, 0x1AE248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE248u;
label_1ae248:
    // 0x1ae248: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1ae248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1ae24c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AE24Cu;
    {
        const bool branch_taken_0x1ae24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae24c) {
            ctx->pc = 0x1AE27Cu;
            goto label_1ae27c;
        }
    }
    ctx->pc = 0x1AE254u;
    // 0x1ae254: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1AE254u;
    SET_GPR_U32(ctx, 31, 0x1AE25Cu);
    ctx->pc = 0x1AE258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE254u;
    // 0x1ae258: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1AE254u, 0x1AE25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE25Cu;
label_1ae25c:
    // 0x1ae25c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE25Cu;
    {
        const bool branch_taken_0x1ae25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE25Cu;
        // 0x1ae260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae25c) {
            ctx->pc = 0x1AE270u;
            goto label_1ae270;
        }
    }
    ctx->pc = 0x1AE264u;
    // 0x1ae264: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae268: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1AE268u;
    {
        const bool branch_taken_0x1ae268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE268u;
        // 0x1ae26c: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae268) {
            ctx->pc = 0x1AE2CCu;
            goto label_1ae2cc;
        }
    }
    ctx->pc = 0x1AE270u;
label_1ae270:
    // 0x1ae270: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae274: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1AE274u;
    {
        const bool branch_taken_0x1ae274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE274u;
        // 0x1ae278: 0x24060036  addiu       $a2, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae274) {
            ctx->pc = 0x1AE2CCu;
            goto label_1ae2cc;
        }
    }
    ctx->pc = 0x1AE27Cu;
label_1ae27c:
    // 0x1ae27c: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AE27Cu;
    SET_GPR_U32(ctx, 31, 0x1AE284u);
    ctx->pc = 0x1AE280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE27Cu;
    // 0x1ae280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AE27Cu, 0x1AE284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE284u;
label_1ae284:
    // 0x1ae284: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ae284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae288: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ae288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae28c: 0x12220013  beq         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AE28Cu;
    {
        const bool branch_taken_0x1ae28c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE28Cu;
        // 0x1ae290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae28c) {
            ctx->pc = 0x1AE2DCu;
            goto label_1ae2dc;
        }
    }
    ctx->pc = 0x1AE294u;
    // 0x1ae294: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1AE294u;
    SET_GPR_U32(ctx, 31, 0x1AE29Cu);
    ctx->pc = 0x1AE298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE294u;
    // 0x1ae298: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1AE294u, 0x1AE29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE29Cu;
label_1ae29c:
    // 0x1ae29c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE29Cu;
    {
        const bool branch_taken_0x1ae29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE29Cu;
        // 0x1ae2a0: 0x2a220008  slti        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae29c) {
            ctx->pc = 0x1AE2C0u;
            goto label_1ae2c0;
        }
    }
    ctx->pc = 0x1AE2A4u;
    // 0x1ae2a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE2A4u;
    {
        const bool branch_taken_0x1ae2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE2A4u;
        // 0x1ae2a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae2a4) {
            ctx->pc = 0x1AE2B4u;
            goto label_1ae2b4;
        }
    }
    ctx->pc = 0x1AE2ACu;
    // 0x1ae2ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE2ACu;
    {
        const bool branch_taken_0x1ae2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE2ACu;
        // 0x1ae2b0: 0x26260015  addiu       $a2, $s1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae2ac) {
            ctx->pc = 0x1AE2C8u;
            goto label_1ae2c8;
        }
    }
    ctx->pc = 0x1AE2B4u;
label_1ae2b4:
    // 0x1ae2b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae2b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE2B8u;
    {
        const bool branch_taken_0x1ae2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE2B8u;
        // 0x1ae2bc: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae2b8) {
            ctx->pc = 0x1AE2CCu;
            goto label_1ae2cc;
        }
    }
    ctx->pc = 0x1AE2C0u;
label_1ae2c0:
    // 0x1ae2c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae2c4: 0x2626000f  addiu       $a2, $s1, 0xF
    ctx->pc = 0x1ae2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
label_1ae2c8:
    // 0x1ae2c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae2cc:
    // 0x1ae2cc: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AE2CCu;
    SET_GPR_U32(ctx, 31, 0x1AE2D4u);
    ctx->pc = 0x1AE2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE2CCu;
    // 0x1ae2d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AE2CCu, 0x1AE2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE2D4u;
label_1ae2d4:
    // 0x1ae2d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE2D4u;
    {
        const bool branch_taken_0x1ae2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE2D4u;
        // 0x1ae2d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae2d4) {
            ctx->pc = 0x1AE2E0u;
            goto label_1ae2e0;
        }
    }
    ctx->pc = 0x1AE2DCu;
label_1ae2dc:
    // 0x1ae2dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae2dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae2e0:
    // 0x1ae2e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ae2e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ae2e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ae2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE2E8u;
        // 0x1ae2ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE2F0u;
}
