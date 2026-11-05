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

// Function: sub_0024B200
// Address: 0x24b200 - 0x24b2b8
void sub_0024B200_0x24b200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B200_0x24b200");
#endif

    switch (ctx->pc) {
        case 0x24b230u: goto label_24b230;
        case 0x24b23cu: goto label_24b23c;
        case 0x24b26cu: goto label_24b26c;
        case 0x24b284u: goto label_24b284;
        default: break;
    }

    ctx->pc = 0x24b200u;

    // 0x24b200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b204: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x24b204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x24b208: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b20c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24b20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24b210: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24b210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b214: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x24b214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24b218: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x24b218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x24b21c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24B21Cu;
    {
        const bool branch_taken_0x24b21c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B21Cu;
        // 0x24b220: 0x2462ffbf  addiu       $v0, $v1, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b21c) {
            ctx->pc = 0x24B244u;
            goto label_24b244;
        }
    }
    ctx->pc = 0x24B224u;
    // 0x24b224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b228: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x24B228u;
    SET_GPR_U32(ctx, 31, 0x24B230u);
    ctx->pc = 0x24B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B228u;
    // 0x24b22c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x24B228u, 0x24B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B230u;
label_24b230:
    // 0x24b230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b234: 0xc08fc4e  jal         func_23F138
    ctx->pc = 0x24B234u;
    SET_GPR_U32(ctx, 31, 0x24B23Cu);
    ctx->pc = 0x24B238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B234u;
    // 0x24b238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x24B234u, 0x24B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B23Cu;
label_24b23c:
    // 0x24b23c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24B23Cu;
    {
        const bool branch_taken_0x24b23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B23Cu;
        // 0x24b240: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b23c) {
            ctx->pc = 0x24B270u;
            goto label_24b270;
        }
    }
    ctx->pc = 0x24B244u;
label_24b244:
    // 0x24b244: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24b244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24b248: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24B248u;
    {
        const bool branch_taken_0x24b248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b248) {
            ctx->pc = 0x24B24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B248u;
            // 0x24b24c: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B270u;
            goto label_24b270;
        }
    }
    ctx->pc = 0x24B250u;
    // 0x24b250: 0x8c82014c  lw          $v0, 0x14C($a0)
    ctx->pc = 0x24b250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
    // 0x24b254: 0x2442ffbf  addiu       $v0, $v0, -0x41
    ctx->pc = 0x24b254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967231));
    // 0x24b258: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24b258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24b25c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B25Cu;
    {
        const bool branch_taken_0x24b25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b25c) {
            ctx->pc = 0x24B260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B25Cu;
            // 0x24b260: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B270u;
            goto label_24b270;
        }
    }
    ctx->pc = 0x24B264u;
    // 0x24b264: 0xc092b94  jal         func_24AE50
    ctx->pc = 0x24B264u;
    SET_GPR_U32(ctx, 31, 0x24B26Cu);
    ctx->pc = 0x24B268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B264u;
    // 0x24b268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AE50u, 0x24B264u, 0x24B26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B26Cu;
label_24b26c:
    // 0x24b26c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x24b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_24b270:
    // 0x24b270: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x24b270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x24b274: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x24B274u;
    {
        const bool branch_taken_0x24b274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b274) {
            ctx->pc = 0x24B278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B274u;
            // 0x24b278: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B2A0u;
            goto label_24b2a0;
        }
    }
    ctx->pc = 0x24B27Cu;
    // 0x24b27c: 0xc0bf868  jal         func_2FE1A0
    ctx->pc = 0x24B27Cu;
    SET_GPR_U32(ctx, 31, 0x24B284u);
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x24B27Cu, 0x24B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B284u;
label_24b284:
    // 0x24b284: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24B284u;
    {
        const bool branch_taken_0x24b284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B284u;
        // 0x24b288: 0x3c020800  lui         $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b284) {
            ctx->pc = 0x24B29Cu;
            goto label_24b29c;
        }
    }
    ctx->pc = 0x24B28Cu;
    // 0x24b28c: 0x8e0311c0  lw          $v1, 0x11C0($s0)
    ctx->pc = 0x24b28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x24b290: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x24b290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x24b294: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24b294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24b298: 0xae0311c0  sw          $v1, 0x11C0($s0)
    ctx->pc = 0x24b298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 3));
label_24b29c:
    // 0x24b29c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b29cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24b2a0:
    // 0x24b2a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24b2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x24B2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2A4u;
        // 0x24b2a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B2ACu;
    // 0x24b2ac: 0x0  nop
    ctx->pc = 0x24b2acu;
    // NOP
    // 0x24b2b0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24b2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24b2b4: 0x0  nop
    ctx->pc = 0x24b2b4u;
    // NOP
    ctx->pc = 0x24b2b8u;
}
