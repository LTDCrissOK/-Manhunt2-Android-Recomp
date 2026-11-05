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

// Function: sub_002B2E58
// Address: 0x2b2e58 - 0x2b2f10
void sub_002B2E58_0x2b2e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2E58_0x2b2e58");
#endif

    switch (ctx->pc) {
        case 0x2b2e7cu: goto label_2b2e7c;
        case 0x2b2eb4u: goto label_2b2eb4;
        default: break;
    }

    ctx->pc = 0x2b2e58u;

    // 0x2b2e58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b2e5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b2e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b2e60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2e64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b2e64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2e68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b2e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b2e6c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2E6Cu;
    {
        const bool branch_taken_0x2b2e6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E6Cu;
        // 0x2b2e70: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e6c) {
            ctx->pc = 0x2B2E7Cu;
            goto label_2b2e7c;
        }
    }
    ctx->pc = 0x2B2E74u;
    // 0x2b2e74: 0xc0acc1a  jal         func_2B3068
    ctx->pc = 0x2B2E74u;
    SET_GPR_U32(ctx, 31, 0x2B2E7Cu);
    ctx->pc = 0x2B3068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3068u, 0x2B2E74u, 0x2B2E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2E7Cu;
label_2b2e7c:
    // 0x2b2e7c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b2e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2e80: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2b2e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b2e84: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2b2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b2e88: 0xae5100a0  sw          $s1, 0xA0($s2)
    ctx->pc = 0x2b2e88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 17));
    // 0x2b2e8c: 0xae5100b0  sw          $s1, 0xB0($s2)
    ctx->pc = 0x2b2e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 17));
    // 0x2b2e90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b2e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2e94: 0xae5000b4  sw          $s0, 0xB4($s2)
    ctx->pc = 0x2b2e94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 16));
    // 0x2b2e98: 0xae5000b8  sw          $s0, 0xB8($s2)
    ctx->pc = 0x2b2e98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 16));
    // 0x2b2e9c: 0xae5000bc  sw          $s0, 0xBC($s2)
    ctx->pc = 0x2b2e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 16));
    // 0x2b2ea0: 0xae5100c0  sw          $s1, 0xC0($s2)
    ctx->pc = 0x2b2ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 17));
    // 0x2b2ea4: 0xae4200ac  sw          $v0, 0xAC($s2)
    ctx->pc = 0x2b2ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 2));
    // 0x2b2ea8: 0xae4200a4  sw          $v0, 0xA4($s2)
    ctx->pc = 0x2b2ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
    // 0x2b2eac: 0xc0acc42  jal         func_2B3108
    ctx->pc = 0x2B2EACu;
    SET_GPR_U32(ctx, 31, 0x2B2EB4u);
    ctx->pc = 0x2B2EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2EACu;
    // 0x2b2eb0: 0xae4200a8  sw          $v0, 0xA8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3108u, 0x2B2EACu, 0x2B2EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2EB4u;
label_2b2eb4:
    // 0x2b2eb4: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2b2eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2b2eb8: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x2b2eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2b2ebc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2b2ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b2ec0: 0xae5000e4  sw          $s0, 0xE4($s2)
    ctx->pc = 0x2b2ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
    // 0x2b2ec4: 0xae5100e0  sw          $s1, 0xE0($s2)
    ctx->pc = 0x2b2ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 17));
    // 0x2b2ec8: 0xae5100d4  sw          $s1, 0xD4($s2)
    ctx->pc = 0x2b2ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 17));
    // 0x2b2ecc: 0xae5100d8  sw          $s1, 0xD8($s2)
    ctx->pc = 0x2b2eccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 17));
    // 0x2b2ed0: 0xae4200c4  sw          $v0, 0xC4($s2)
    ctx->pc = 0x2b2ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
    // 0x2b2ed4: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x2b2ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x2b2ed8: 0xae4400cc  sw          $a0, 0xCC($s2)
    ctx->pc = 0x2b2ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 4));
    // 0x2b2edc: 0xae4500dc  sw          $a1, 0xDC($s2)
    ctx->pc = 0x2b2edcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 5));
    // 0x2b2ee0: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x2b2ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
    // 0x2b2ee4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2ee8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b2ee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2eec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b2eecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2ef0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b2ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EF4u;
        // 0x2b2ef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2EFCu;
    // 0x2b2efc: 0x0  nop
    ctx->pc = 0x2b2efcu;
    // NOP
    // 0x2b2f00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b2f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b2f04: 0x0  nop
    ctx->pc = 0x2b2f04u;
    // NOP
    // 0x2b2f08: 0x34422e3c  ori         $v0, $v0, 0x2E3C
    ctx->pc = 0x2b2f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11836);
    // 0x2b2f0c: 0x0  nop
    ctx->pc = 0x2b2f0cu;
    // NOP
    ctx->pc = 0x2b2f10u;
}
