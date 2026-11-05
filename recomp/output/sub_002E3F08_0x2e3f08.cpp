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

// Function: sub_002E3F08
// Address: 0x2e3f08 - 0x2e3f80
void sub_002E3F08_0x2e3f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3F08_0x2e3f08");
#endif

    switch (ctx->pc) {
        case 0x2e3f30u: goto label_2e3f30;
        case 0x2e3f48u: goto label_2e3f48;
        default: break;
    }

    ctx->pc = 0x2e3f08u;

    // 0x2e3f08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e3f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e3f0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e3f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e3f10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e3f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e3f14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e3f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3f18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e3f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e3f1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e3f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3f20: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2e3f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2e3f24: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x2e3f24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2e3f28: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x2E3F28u;
    SET_GPR_U32(ctx, 31, 0x2E3F30u);
    ctx->pc = 0x2E3F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3F28u;
    // 0x2e3f2c: 0xae260004  sw          $a2, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2E3F28u, 0x2E3F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3F30u;
label_2e3f30:
    // 0x2e3f30: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2e3f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2e3f34: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E3F34u;
    {
        const bool branch_taken_0x2e3f34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F34u;
        // 0x2e3f38: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f34) {
            ctx->pc = 0x2E3F64u;
            goto label_2e3f64;
        }
    }
    ctx->pc = 0x2E3F3Cu;
    // 0x2e3f3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e3f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3f40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e3f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3f44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e3f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e3f48:
    // 0x2e3f48: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2e3f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2e3f4c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2e3f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2e3f50: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e3f50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e3f54: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2e3f54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2e3f58: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2e3f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2e3f5c: 0x1485fffa  bne         $a0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E3F5Cu;
    {
        const bool branch_taken_0x2e3f5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2E3F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F5Cu;
        // 0x2e3f60: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f5c) {
            ctx->pc = 0x2E3F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3f48;
        }
    }
    ctx->pc = 0x2E3F64u;
label_2e3f64:
    // 0x2e3f64: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2e3f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2e3f68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e3f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3f6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e3f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3f70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e3f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e3f74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e3f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3f78: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F78u;
        // 0x2e3f7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3F80u;
}
