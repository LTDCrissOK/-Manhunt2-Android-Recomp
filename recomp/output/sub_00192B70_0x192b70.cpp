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

// Function: sub_00192B70
// Address: 0x192b70 - 0x192bf8
void sub_00192B70_0x192b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192B70_0x192b70");
#endif

    switch (ctx->pc) {
        case 0x192b98u: goto label_192b98;
        case 0x192bacu: goto label_192bac;
        default: break;
    }

    ctx->pc = 0x192b70u;

    // 0x192b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192b74: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x192b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x192b78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x192b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x192b7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x192b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x192b80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x192b84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x192b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b88: 0x8e220ff8  lw          $v0, 0xFF8($s1)
    ctx->pc = 0x192b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
    // 0x192b8c: 0x2450002c  addiu       $s0, $v0, 0x2C
    ctx->pc = 0x192b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x192b90: 0xc0f7182  jal         func_3DC608
    ctx->pc = 0x192B90u;
    SET_GPR_U32(ctx, 31, 0x192B98u);
    ctx->pc = 0x192B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192B90u;
    // 0x192b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC608u, 0x192B90u, 0x192B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192B98u;
label_192b98:
    // 0x192b98: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x192B98u;
    {
        const bool branch_taken_0x192b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192b98) {
            ctx->pc = 0x192B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192B98u;
            // 0x192b9c: 0x8e230ff8  lw          $v1, 0xFF8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192BB8u;
            goto label_192bb8;
        }
    }
    ctx->pc = 0x192BA0u;
    // 0x192ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ba4: 0xc0f7182  jal         func_3DC608
    ctx->pc = 0x192BA4u;
    SET_GPR_U32(ctx, 31, 0x192BACu);
    ctx->pc = 0x192BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192BA4u;
    // 0x192ba8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC608u, 0x192BA4u, 0x192BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192BACu;
label_192bac:
    // 0x192bac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x192BACu;
    {
        const bool branch_taken_0x192bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192BACu;
        // 0x192bb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192bac) {
            ctx->pc = 0x192BE4u;
            goto label_192be4;
        }
    }
    ctx->pc = 0x192BB4u;
    // 0x192bb4: 0x8e230ff8  lw          $v1, 0xFF8($s1)
    ctx->pc = 0x192bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
label_192bb8:
    // 0x192bb8: 0x90620111  lbu         $v0, 0x111($v1)
    ctx->pc = 0x192bb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 273)));
    // 0x192bbc: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x192bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x192bc0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x192BC0u;
    {
        const bool branch_taken_0x192bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192BC0u;
        // 0x192bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192bc0) {
            ctx->pc = 0x192BE4u;
            goto label_192be4;
        }
    }
    ctx->pc = 0x192BC8u;
    // 0x192bc8: 0x8e251004  lw          $a1, 0x1004($s1)
    ctx->pc = 0x192bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
    // 0x192bcc: 0x8ca40ff8  lw          $a0, 0xFF8($a1)
    ctx->pc = 0x192bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4088)));
    // 0x192bd0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x192bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x192bd4: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x192bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x192bd8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x192BD8u;
    {
        const bool branch_taken_0x192bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x192BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192BD8u;
        // 0x192bdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192bd8) {
            ctx->pc = 0x192BE4u;
            goto label_192be4;
        }
    }
    ctx->pc = 0x192BE0u;
    // 0x192be0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192be4:
    // 0x192be4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x192be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192be8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x192be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192bec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x192BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192BF0u;
        // 0x192bf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192BF8u;
}
