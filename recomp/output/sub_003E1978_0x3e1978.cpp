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

// Function: sub_003E1978
// Address: 0x3e1978 - 0x3e19f8
void sub_003E1978_0x3e1978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1978_0x3e1978");
#endif

    switch (ctx->pc) {
        case 0x3e19a8u: goto label_3e19a8;
        case 0x3e19b4u: goto label_3e19b4;
        case 0x3e19c0u: goto label_3e19c0;
        case 0x3e19d4u: goto label_3e19d4;
        default: break;
    }

    ctx->pc = 0x3e1978u;

    // 0x3e1978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e1978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e197c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e197cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e1980: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e1980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e1984: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x3e1984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x3e1988: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e1988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e198c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e198cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1990: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e1990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e1994: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e1994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1998: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x3e1998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x3e199c: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3e199cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3e19a0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E19A0u;
    SET_GPR_U32(ctx, 31, 0x3E19A8u);
    ctx->pc = 0x3E19A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E19A0u;
    // 0x3e19a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E19A0u, 0x3E19A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E19A8u;
label_3e19a8:
    // 0x3e19a8: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3e19a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3e19ac: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E19ACu;
    SET_GPR_U32(ctx, 31, 0x3E19B4u);
    ctx->pc = 0x3E19B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E19ACu;
    // 0x3e19b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E19ACu, 0x3E19B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E19B4u;
label_3e19b4:
    // 0x3e19b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e19b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e19b8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E19B8u;
    SET_GPR_U32(ctx, 31, 0x3E19C0u);
    ctx->pc = 0x3E19BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E19B8u;
    // 0x3e19bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E19B8u, 0x3E19C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E19C0u;
label_3e19c0:
    // 0x3e19c0: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3e19c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e19c4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E19C4u;
    {
        const bool branch_taken_0x3e19c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E19C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E19C4u;
        // 0x3e19c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e19c4) {
            ctx->pc = 0x3E19D8u;
            goto label_3e19d8;
        }
    }
    ctx->pc = 0x3E19CCu;
    // 0x3e19cc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E19CCu;
    SET_GPR_U32(ctx, 31, 0x3E19D4u);
    ctx->pc = 0x3E19D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E19CCu;
    // 0x3e19d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E19CCu, 0x3E19D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E19D4u;
label_3e19d4:
    // 0x3e19d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e19d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e19d8:
    // 0x3e19d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e19d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e19dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e19dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e19e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E19E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E19E0u;
        // 0x3e19e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E19E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E19E8u;
    // 0x3e19e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3e19e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3e19ec: 0x0  nop
    ctx->pc = 0x3e19ecu;
    // NOP
    // 0x3e19f0: 0xe48c0078  swc1        $f12, 0x78($a0)
    ctx->pc = 0x3e19f0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x3e19f4: 0x0  nop
    ctx->pc = 0x3e19f4u;
    // NOP
    ctx->pc = 0x3e19f8u;
}
