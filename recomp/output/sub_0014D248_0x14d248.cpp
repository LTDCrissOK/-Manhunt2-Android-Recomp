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

// Function: sub_0014D248
// Address: 0x14d248 - 0x14d298
void sub_0014D248_0x14d248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D248_0x14d248");
#endif

    switch (ctx->pc) {
        case 0x14d264u: goto label_14d264;
        case 0x14d26cu: goto label_14d26c;
        case 0x14d280u: goto label_14d280;
        default: break;
    }

    ctx->pc = 0x14d248u;

    // 0x14d248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d24c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14d250: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d254: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14d254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14d258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14d25c: 0xc0535f4  jal         func_14D7D0
    ctx->pc = 0x14D25Cu;
    SET_GPR_U32(ctx, 31, 0x14D264u);
    ctx->pc = 0x14D260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D25Cu;
    // 0x14d260: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D7D0u, 0x14D25Cu, 0x14D264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D264u;
label_14d264:
    // 0x14d264: 0xc04d7e2  jal         func_135F88
    ctx->pc = 0x14D264u;
    SET_GPR_U32(ctx, 31, 0x14D26Cu);
    ctx->pc = 0x14D268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D264u;
    // 0x14d268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F88u, 0x14D264u, 0x14D26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D26Cu;
label_14d26c:
    // 0x14d26c: 0xae110464  sw          $s1, 0x464($s0)
    ctx->pc = 0x14d26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1124), GPR_U32(ctx, 17));
    // 0x14d270: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d274: 0xae020460  sw          $v0, 0x460($s0)
    ctx->pc = 0x14d274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 2));
    // 0x14d278: 0xc04d89a  jal         func_136268
    ctx->pc = 0x14D278u;
    SET_GPR_U32(ctx, 31, 0x14D280u);
    ctx->pc = 0x14D27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D278u;
    // 0x14d27c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136268u, 0x14D278u, 0x14D280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D280u;
label_14d280:
    // 0x14d280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d284: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14d284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14d288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d28c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D28Cu;
        // 0x14d290: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D294u;
    // 0x14d294: 0x0  nop
    ctx->pc = 0x14d294u;
    // NOP
    ctx->pc = 0x14d298u;
}
