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

// Function: sub_002E4EB0
// Address: 0x2e4eb0 - 0x2e4f08
void sub_002E4EB0_0x2e4eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4EB0_0x2e4eb0");
#endif

    switch (ctx->pc) {
        case 0x2e4eccu: goto label_2e4ecc;
        case 0x2e4ed8u: goto label_2e4ed8;
        default: break;
    }

    ctx->pc = 0x2e4eb0u;

    // 0x2e4eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e4eb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e4eb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e4eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e4ebc: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E4EBCu;
    {
        const bool branch_taken_0x2e4ebc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4EBCu;
        // 0x2e4ec0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4ebc) {
            ctx->pc = 0x2E4EF4u;
            goto label_2e4ef4;
        }
    }
    ctx->pc = 0x2E4EC4u;
    // 0x2e4ec4: 0xc0a03d0  jal         func_280F40
    ctx->pc = 0x2E4EC4u;
    SET_GPR_U32(ctx, 31, 0x2E4ECCu);
    ctx->pc = 0x280F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F40u, 0x2E4EC4u, 0x2E4ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4ECCu;
label_2e4ecc:
    // 0x2e4ecc: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x2e4eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x2e4ed0: 0xc0c259a  jal         func_309668
    ctx->pc = 0x2E4ED0u;
    SET_GPR_U32(ctx, 31, 0x2E4ED8u);
    ctx->pc = 0x2E4ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4ED0u;
    // 0x2e4ed4: 0x24846920  addiu       $a0, $a0, 0x6920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309668u, 0x2E4ED0u, 0x2E4ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4ED8u;
label_2e4ed8:
    // 0x2e4ed8: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2e4ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2e4edc: 0xc6010504  lwc1        $f1, 0x504($s0)
    ctx->pc = 0x2e4edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4ee0: 0xc6000508  lwc1        $f0, 0x508($s0)
    ctx->pc = 0x2e4ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4ee4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2e4ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2e4ee8: 0xae0211c0  sw          $v0, 0x11C0($s0)
    ctx->pc = 0x2e4ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
    // 0x2e4eec: 0xe60012f8  swc1        $f0, 0x12F8($s0)
    ctx->pc = 0x2e4eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4856), bits); }
    // 0x2e4ef0: 0xe60112f4  swc1        $f1, 0x12F4($s0)
    ctx->pc = 0x2e4ef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4852), bits); }
label_2e4ef4:
    // 0x2e4ef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4ef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4ef8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e4ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4efc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4EFCu;
        // 0x2e4f00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4F04u;
    // 0x2e4f04: 0x0  nop
    ctx->pc = 0x2e4f04u;
    // NOP
    ctx->pc = 0x2e4f08u;
}
