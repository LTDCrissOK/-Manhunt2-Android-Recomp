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

// Function: sub_00161B00
// Address: 0x161b00 - 0x161b98
void sub_00161B00_0x161b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161B00_0x161b00");
#endif

    switch (ctx->pc) {
        case 0x161b50u: goto label_161b50;
        case 0x161b60u: goto label_161b60;
        case 0x161b78u: goto label_161b78;
        default: break;
    }

    ctx->pc = 0x161b00u;

    // 0x161b00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x161b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x161b04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x161b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x161b08: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x161b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x161b0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x161b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x161b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x161b14: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x161b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x161b18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x161b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x161b1c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x161b1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x161b20: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x161B20u;
    {
        const bool branch_taken_0x161b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B20u;
        // 0x161b24: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b20) {
            ctx->pc = 0x161B78u;
            goto label_161b78;
        }
    }
    ctx->pc = 0x161B28u;
    // 0x161b28: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x161b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x161b2c: 0x8e1202e0  lw          $s2, 0x2E0($s0)
    ctx->pc = 0x161b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x161b30: 0x2453b060  addiu       $s3, $v0, -0x4FA0
    ctx->pc = 0x161b30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946912));
    // 0x161b34: 0x8c710010  lw          $s1, 0x10($v1)
    ctx->pc = 0x161b34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x161b38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x161b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b3c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x161b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x161b40: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x161b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x161b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b48: 0xc04aea0  jal         func_12BA80
    ctx->pc = 0x161B48u;
    SET_GPR_U32(ctx, 31, 0x161B50u);
    ctx->pc = 0x161B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161B48u;
    // 0x161b4c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA80u, 0x161B48u, 0x161B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161B50u;
label_161b50:
    // 0x161b50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161B50u;
    {
        const bool branch_taken_0x161b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B50u;
        // 0x161b54: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b50) {
            ctx->pc = 0x161B78u;
            goto label_161b78;
        }
    }
    ctx->pc = 0x161B58u;
    // 0x161b58: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x161B58u;
    SET_GPR_U32(ctx, 31, 0x161B60u);
    ctx->pc = 0x161B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161B58u;
    // 0x161b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x161B58u, 0x161B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161B60u;
label_161b60:
    // 0x161b60: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x161b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x161b64: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x161B64u;
    {
        const bool branch_taken_0x161b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x161B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B64u;
        // 0x161b68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b64) {
            ctx->pc = 0x161B78u;
            goto label_161b78;
        }
    }
    ctx->pc = 0x161B6Cu;
    // 0x161b6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x161b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b70: 0xc04aec2  jal         func_12BB08
    ctx->pc = 0x161B70u;
    SET_GPR_U32(ctx, 31, 0x161B78u);
    ctx->pc = 0x161B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161B70u;
    // 0x161b74: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BB08u, 0x161B70u, 0x161B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161B78u;
label_161b78:
    // 0x161b78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x161b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161b7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x161b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x161b80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x161b80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161b84: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x161b84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x161b88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x161b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x161B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B8Cu;
        // 0x161b90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161B94u;
    // 0x161b94: 0x0  nop
    ctx->pc = 0x161b94u;
    // NOP
    ctx->pc = 0x161b98u;
}
