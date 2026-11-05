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

// Function: sub_0014DCB8
// Address: 0x14dcb8 - 0x14dd38
void sub_0014DCB8_0x14dcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DCB8_0x14dcb8");
#endif

    switch (ctx->pc) {
        case 0x14dcccu: goto label_14dccc;
        case 0x14dd20u: goto label_14dd20;
        default: break;
    }

    ctx->pc = 0x14dcb8u;

    // 0x14dcb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14dcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14dcbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14dcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14dcc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14dcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14dcc4: 0xc04d6b0  jal         func_135AC0
    ctx->pc = 0x14DCC4u;
    SET_GPR_U32(ctx, 31, 0x14DCCCu);
    ctx->pc = 0x14DCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DCC4u;
    // 0x14dcc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135AC0u, 0x14DCC4u, 0x14DCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCCCu;
label_14dccc:
    // 0x14dccc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x14dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x14dcd0: 0xae0008a8  sw          $zero, 0x8A8($s0)
    ctx->pc = 0x14dcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2216), GPR_U32(ctx, 0));
    // 0x14dcd4: 0x24630ab0  addiu       $v1, $v1, 0xAB0
    ctx->pc = 0x14dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2736));
    // 0x14dcd8: 0xae0008ac  sw          $zero, 0x8AC($s0)
    ctx->pc = 0x14dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2220), GPR_U32(ctx, 0));
    // 0x14dcdc: 0xae0008b0  sw          $zero, 0x8B0($s0)
    ctx->pc = 0x14dcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2224), GPR_U32(ctx, 0));
    // 0x14dce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14dce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dce4: 0xae0008c8  sw          $zero, 0x8C8($s0)
    ctx->pc = 0x14dce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2248), GPR_U32(ctx, 0));
    // 0x14dce8: 0xae0008cc  sw          $zero, 0x8CC($s0)
    ctx->pc = 0x14dce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2252), GPR_U32(ctx, 0));
    // 0x14dcec: 0xae0008d4  sw          $zero, 0x8D4($s0)
    ctx->pc = 0x14dcecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2260), GPR_U32(ctx, 0));
    // 0x14dcf0: 0xae0008d8  sw          $zero, 0x8D8($s0)
    ctx->pc = 0x14dcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2264), GPR_U32(ctx, 0));
    // 0x14dcf4: 0xae0008e4  sw          $zero, 0x8E4($s0)
    ctx->pc = 0x14dcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2276), GPR_U32(ctx, 0));
    // 0x14dcf8: 0xae0008e8  sw          $zero, 0x8E8($s0)
    ctx->pc = 0x14dcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2280), GPR_U32(ctx, 0));
    // 0x14dcfc: 0xae0008ec  sw          $zero, 0x8EC($s0)
    ctx->pc = 0x14dcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2284), GPR_U32(ctx, 0));
    // 0x14dd00: 0xae000904  sw          $zero, 0x904($s0)
    ctx->pc = 0x14dd00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2308), GPR_U32(ctx, 0));
    // 0x14dd04: 0xae000908  sw          $zero, 0x908($s0)
    ctx->pc = 0x14dd04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2312), GPR_U32(ctx, 0));
    // 0x14dd08: 0xae000910  sw          $zero, 0x910($s0)
    ctx->pc = 0x14dd08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2320), GPR_U32(ctx, 0));
    // 0x14dd0c: 0xae000914  sw          $zero, 0x914($s0)
    ctx->pc = 0x14dd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2324), GPR_U32(ctx, 0));
    // 0x14dd10: 0xae000960  sw          $zero, 0x960($s0)
    ctx->pc = 0x14dd10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2400), GPR_U32(ctx, 0));
    // 0x14dd14: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x14dd14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x14dd18: 0xc053836  jal         func_14E0D8
    ctx->pc = 0x14DD18u;
    SET_GPR_U32(ctx, 31, 0x14DD20u);
    ctx->pc = 0x14DD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DD18u;
    // 0x14dd1c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E0D8u, 0x14DD18u, 0x14DD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DD20u;
label_14dd20:
    // 0x14dd20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14dd20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14dd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14dd28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14dd28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14dd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x14DD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD2Cu;
        // 0x14dd30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DD34u;
    // 0x14dd34: 0x0  nop
    ctx->pc = 0x14dd34u;
    // NOP
    ctx->pc = 0x14dd38u;
}
