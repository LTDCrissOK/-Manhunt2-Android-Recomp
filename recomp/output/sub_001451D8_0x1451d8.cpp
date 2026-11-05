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

// Function: sub_001451D8
// Address: 0x1451d8 - 0x145238
void sub_001451D8_0x1451d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001451D8_0x1451d8");
#endif

    switch (ctx->pc) {
        case 0x1451fcu: goto label_1451fc;
        case 0x145208u: goto label_145208;
        case 0x145214u: goto label_145214;
        case 0x145224u: goto label_145224;
        default: break;
    }

    ctx->pc = 0x1451d8u;

    // 0x1451d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1451d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1451dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1451dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1451e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1451e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1451e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1451e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1451e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1451e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1451ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1451ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1451f0: 0xae260468  sw          $a2, 0x468($s1)
    ctx->pc = 0x1451f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1128), GPR_U32(ctx, 6));
    // 0x1451f4: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x1451F4u;
    SET_GPR_U32(ctx, 31, 0x1451FCu);
    ctx->pc = 0x1451F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1451F4u;
    // 0x1451f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x1451F4u, 0x1451FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1451FCu;
label_1451fc:
    // 0x1451fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1451fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145200: 0xc046272  jal         func_1189C8
    ctx->pc = 0x145200u;
    SET_GPR_U32(ctx, 31, 0x145208u);
    ctx->pc = 0x145204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145200u;
    // 0x145204: 0xae220520  sw          $v0, 0x520($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1312), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x145200u, 0x145208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145208u;
label_145208:
    // 0x145208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14520c: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x14520Cu;
    SET_GPR_U32(ctx, 31, 0x145214u);
    ctx->pc = 0x145210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14520Cu;
    // 0x145210: 0xae220524  sw          $v0, 0x524($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1316), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x14520Cu, 0x145214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145214u;
label_145214:
    // 0x145214: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x145214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x145218: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x145218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14521c: 0xc042136  jal         func_1084D8
    ctx->pc = 0x14521Cu;
    SET_GPR_U32(ctx, 31, 0x145224u);
    ctx->pc = 0x145220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14521Cu;
    // 0x145220: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x14521Cu, 0x145224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145224u;
label_145224:
    // 0x145224: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145228: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x145228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14522c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14522cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145230: 0x3e00008  jr          $ra
    ctx->pc = 0x145230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145230u;
        // 0x145234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145238u;
}
