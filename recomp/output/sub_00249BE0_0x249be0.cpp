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

// Function: sub_00249BE0
// Address: 0x249be0 - 0x249c80
void sub_00249BE0_0x249be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249BE0_0x249be0");
#endif

    switch (ctx->pc) {
        case 0x249c68u: goto label_249c68;
        default: break;
    }

    ctx->pc = 0x249be0u;

    // 0x249be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x249be4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x249be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249be8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x249bec: 0x240207df  addiu       $v0, $zero, 0x7DF
    ctx->pc = 0x249becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2015));
    // 0x249bf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x249bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x249bf4: 0x8cc50334  lw          $a1, 0x334($a2)
    ctx->pc = 0x249bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 820)));
    // 0x249bf8: 0x8ca30158  lw          $v1, 0x158($a1)
    ctx->pc = 0x249bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 344)));
    // 0x249bfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x249bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x249c00: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x249c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x249c04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x249c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x249c08: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x249C08u;
    {
        const bool branch_taken_0x249c08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x249c08) {
            ctx->pc = 0x249C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249C08u;
            // 0x249c0c: 0x8cc200bc  lw          $v0, 0xBC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249C1Cu;
            goto label_249c1c;
        }
    }
    ctx->pc = 0x249C10u;
    // 0x249c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249c14: 0xaca20160  sw          $v0, 0x160($a1)
    ctx->pc = 0x249c14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 352), GPR_U32(ctx, 2));
    // 0x249c18: 0x8cc200bc  lw          $v0, 0xBC($a2)
    ctx->pc = 0x249c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
label_249c1c:
    // 0x249c1c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x249c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x249c20: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x249C20u;
    {
        const bool branch_taken_0x249c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C20u;
        // 0x249c24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c20) {
            ctx->pc = 0x249C74u;
            goto label_249c74;
        }
    }
    ctx->pc = 0x249C28u;
    // 0x249c28: 0x90c20795  lbu         $v0, 0x795($a2)
    ctx->pc = 0x249c28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1941)));
    // 0x249c2c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x249C2Cu;
    {
        const bool branch_taken_0x249c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C2Cu;
        // 0x249c30: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c2c) {
            ctx->pc = 0x249C40u;
            goto label_249c40;
        }
    }
    ctx->pc = 0x249C34u;
    // 0x249c34: 0x90c20794  lbu         $v0, 0x794($a2)
    ctx->pc = 0x249c34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1940)));
    // 0x249c38: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x249C38u;
    {
        const bool branch_taken_0x249c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249c38) {
            ctx->pc = 0x249C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249C38u;
            // 0x249c3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249C74u;
            goto label_249c74;
        }
    }
    ctx->pc = 0x249C40u;
label_249c40:
    // 0x249c40: 0x8e0298d4  lw          $v0, -0x672C($s0)
    ctx->pc = 0x249c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940884)));
    // 0x249c44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x249c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x249c48: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x249C48u;
    {
        const bool branch_taken_0x249c48 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x249C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C48u;
        // 0x249c4c: 0xae0298d4  sw          $v0, -0x672C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c48) {
            ctx->pc = 0x249C70u;
            goto label_249c70;
        }
    }
    ctx->pc = 0x249C50u;
    // 0x249c50: 0x8cc500d4  lw          $a1, 0xD4($a2)
    ctx->pc = 0x249c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x249c54: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x249c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x249c58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x249c58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x249c5c: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x249c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x249c60: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x249C60u;
    SET_GPR_U32(ctx, 31, 0x249C68u);
    ctx->pc = 0x249C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249C60u;
    // 0x249c64: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x249C60u, 0x249C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C68u;
label_249c68:
    // 0x249c68: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x249c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x249c6c: 0xae0298d4  sw          $v0, -0x672C($s0)
    ctx->pc = 0x249c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294940884), GPR_U32(ctx, 2));
label_249c70:
    // 0x249c70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_249c74:
    // 0x249c74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x249c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249c78: 0x3e00008  jr          $ra
    ctx->pc = 0x249C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C78u;
        // 0x249c7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249C80u;
}
