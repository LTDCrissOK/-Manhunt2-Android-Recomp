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

// Function: sub_0014EB80
// Address: 0x14eb80 - 0x14ec00
void sub_0014EB80_0x14eb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EB80_0x14eb80");
#endif

    switch (ctx->pc) {
        case 0x14ebf0u: goto label_14ebf0;
        default: break;
    }

    ctx->pc = 0x14eb80u;

    // 0x14eb80: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14eb80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14eb84: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x14eb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14eb88: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x14eb88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14eb8c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x14eb8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14eb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14eb94: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x14eb94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x14eb98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14eb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14eb9c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x14eb9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14eba0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x14eba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14eba4: 0xacc904e0  sw          $t1, 0x4E0($a2)
    ctx->pc = 0x14eba4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1248), GPR_U32(ctx, 9));
    // 0x14eba8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x14eba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ebac: 0xace004e4  sw          $zero, 0x4E4($a3)
    ctx->pc = 0x14ebacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1252), GPR_U32(ctx, 0));
    // 0x14ebb0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x14ebb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ebb4: 0xad0004e8  sw          $zero, 0x4E8($t0)
    ctx->pc = 0x14ebb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1256), GPR_U32(ctx, 0));
    // 0x14ebb8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x14ebb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ebbc: 0xacc004ec  sw          $zero, 0x4EC($a2)
    ctx->pc = 0x14ebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1260), GPR_U32(ctx, 0));
    // 0x14ebc0: 0xace004f0  sw          $zero, 0x4F0($a3)
    ctx->pc = 0x14ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1264), GPR_U32(ctx, 0));
    // 0x14ebc4: 0xad0004f4  sw          $zero, 0x4F4($t0)
    ctx->pc = 0x14ebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1268), GPR_U32(ctx, 0));
    // 0x14ebc8: 0xacc004f8  sw          $zero, 0x4F8($a2)
    ctx->pc = 0x14ebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1272), GPR_U32(ctx, 0));
    // 0x14ebcc: 0xace004fc  sw          $zero, 0x4FC($a3)
    ctx->pc = 0x14ebccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1276), GPR_U32(ctx, 0));
    // 0x14ebd0: 0xad000500  sw          $zero, 0x500($t0)
    ctx->pc = 0x14ebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1280), GPR_U32(ctx, 0));
    // 0x14ebd4: 0xacc00504  sw          $zero, 0x504($a2)
    ctx->pc = 0x14ebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1284), GPR_U32(ctx, 0));
    // 0x14ebd8: 0xace00508  sw          $zero, 0x508($a3)
    ctx->pc = 0x14ebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1288), GPR_U32(ctx, 0));
    // 0x14ebdc: 0xad0a050c  sw          $t2, 0x50C($t0)
    ctx->pc = 0x14ebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1292), GPR_U32(ctx, 10));
    // 0x14ebe0: 0xacc00510  sw          $zero, 0x510($a2)
    ctx->pc = 0x14ebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1296), GPR_U32(ctx, 0));
    // 0x14ebe4: 0xace00514  sw          $zero, 0x514($a3)
    ctx->pc = 0x14ebe4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1300), GPR_U32(ctx, 0));
    // 0x14ebe8: 0xc04d8b4  jal         func_1362D0
    ctx->pc = 0x14EBE8u;
    SET_GPR_U32(ctx, 31, 0x14EBF0u);
    ctx->pc = 0x14EBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EBE8u;
    // 0x14ebec: 0xac400518  sw          $zero, 0x518($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1304), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1362D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362D0u, 0x14EBE8u, 0x14EBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBF0u;
label_14ebf0:
    // 0x14ebf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ebf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ebf4: 0x3e00008  jr          $ra
    ctx->pc = 0x14EBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBF4u;
        // 0x14ebf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EBFCu;
    // 0x14ebfc: 0x0  nop
    ctx->pc = 0x14ebfcu;
    // NOP
    ctx->pc = 0x14ec00u;
}
