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

// Function: sub_001B1CC0
// Address: 0x1b1cc0 - 0x1b1d70
void sub_001B1CC0_0x1b1cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1CC0_0x1b1cc0");
#endif

    switch (ctx->pc) {
        case 0x1b1cfcu: goto label_1b1cfc;
        case 0x1b1d30u: goto label_1b1d30;
        default: break;
    }

    ctx->pc = 0x1b1cc0u;

    // 0x1b1cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b1cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1cc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b1cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b1ccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b1cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1cd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b1cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b1cd4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b1cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b1cd8: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1b1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1b1cdc: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x1b1cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1b1ce0: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B1CE0u;
    {
        const bool branch_taken_0x1b1ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CE0u;
        // 0x1b1ce4: 0x8c440110  lw          $a0, 0x110($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ce0) {
            ctx->pc = 0x1B1D58u;
            goto label_1b1d58;
        }
    }
    ctx->pc = 0x1B1CE8u;
    // 0x1b1ce8: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x1b1ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1b1cec: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1CECu;
    {
        const bool branch_taken_0x1b1cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1cec) {
            ctx->pc = 0x1B1CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1CECu;
            // 0x1b1cf0: 0x8e030088  lw          $v1, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1D0Cu;
            goto label_1b1d0c;
        }
    }
    ctx->pc = 0x1B1CF4u;
    // 0x1b1cf4: 0xc07577c  jal         func_1D5DF0
    ctx->pc = 0x1B1CF4u;
    SET_GPR_U32(ctx, 31, 0x1B1CFCu);
    ctx->pc = 0x1D5DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5DF0u, 0x1B1CF4u, 0x1B1CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1CFCu;
label_1b1cfc:
    // 0x1b1cfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1d00: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x1b1d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x1b1d04: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B1D04u;
    {
        const bool branch_taken_0x1b1d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D04u;
        // 0x1b1d08: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d04) {
            ctx->pc = 0x1B1D58u;
            goto label_1b1d58;
        }
    }
    ctx->pc = 0x1B1D0Cu;
label_1b1d0c:
    // 0x1b1d0c: 0x24120018  addiu       $s2, $zero, 0x18
    ctx->pc = 0x1b1d0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b1d10: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1b1d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1b1d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d18: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x1b1d18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b1d1c: 0x24428658  addiu       $v0, $v0, -0x79A8
    ctx->pc = 0x1b1d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    // 0x1b1d20: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1b1d20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b1d24: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1b1d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b1d28: 0xc06c680  jal         func_1B1A00
    ctx->pc = 0x1B1D28u;
    SET_GPR_U32(ctx, 31, 0x1B1D30u);
    ctx->pc = 0x1B1D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1D28u;
    // 0x1b1d2c: 0xc46c0000  lwc1        $f12, 0x0($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A00u, 0x1B1D28u, 0x1B1D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D30u;
label_1b1d30:
    // 0x1b1d30: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1D30u;
    {
        const bool branch_taken_0x1b1d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D30u;
        // 0x1b1d34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d30) {
            ctx->pc = 0x1B1D3Cu;
            goto label_1b1d3c;
        }
    }
    ctx->pc = 0x1B1D38u;
    // 0x1b1d38: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x1b1d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
label_1b1d3c:
    // 0x1b1d3c: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1b1d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1b1d40: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1b1d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1b1d44: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b1d44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b1d48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b1d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1d4c: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x1b1d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b1d50: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1b1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b1d54: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b1d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1b1d58:
    // 0x1b1d58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1d5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b1d5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1d60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b1d60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1d64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b1d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b1d68: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D68u;
        // 0x1b1d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1D70u;
}
