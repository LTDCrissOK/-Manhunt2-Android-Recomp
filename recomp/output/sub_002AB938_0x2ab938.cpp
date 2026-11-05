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

// Function: sub_002AB938
// Address: 0x2ab938 - 0x2ab9a0
void sub_002AB938_0x2ab938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB938_0x2ab938");
#endif

    switch (ctx->pc) {
        case 0x2ab960u: goto label_2ab960;
        case 0x2ab96cu: goto label_2ab96c;
        case 0x2ab978u: goto label_2ab978;
        case 0x2ab98cu: goto label_2ab98c;
        default: break;
    }

    ctx->pc = 0x2ab938u;

    // 0x2ab938: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab93c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ab93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ab940: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ab940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ab944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ab944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab948: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab94c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ab94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ab950: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB950u;
    {
        const bool branch_taken_0x2ab950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB950u;
        // 0x2ab954: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab950) {
            ctx->pc = 0x2AB960u;
            goto label_2ab960;
        }
    }
    ctx->pc = 0x2AB958u;
    // 0x2ab958: 0xc0aae42  jal         func_2AB908
    ctx->pc = 0x2AB958u;
    SET_GPR_U32(ctx, 31, 0x2AB960u);
    ctx->pc = 0x2AB908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB908u, 0x2AB958u, 0x2AB960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB960u;
label_2ab960:
    // 0x2ab960: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2ab960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2ab964: 0xc0ab36c  jal         func_2ACDB0
    ctx->pc = 0x2AB964u;
    SET_GPR_U32(ctx, 31, 0x2AB96Cu);
    ctx->pc = 0x2AB968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB964u;
    // 0x2ab968: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDB0u, 0x2AB964u, 0x2AB96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB96Cu;
label_2ab96c:
    // 0x2ab96c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2ab96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2ab970: 0xc0ab36c  jal         func_2ACDB0
    ctx->pc = 0x2AB970u;
    SET_GPR_U32(ctx, 31, 0x2AB978u);
    ctx->pc = 0x2AB974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB970u;
    // 0x2ab974: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDB0u, 0x2AB970u, 0x2AB978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB978u;
label_2ab978:
    // 0x2ab978: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2ab978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2ab97c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AB97Cu;
    {
        const bool branch_taken_0x2ab97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab97c) {
            ctx->pc = 0x2AB980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB97Cu;
            // 0x2ab980: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB990u;
            goto label_2ab990;
        }
    }
    ctx->pc = 0x2AB984u;
    // 0x2ab984: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2AB984u;
    SET_GPR_U32(ctx, 31, 0x2AB98Cu);
    ctx->pc = 0x2AB988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB984u;
    // 0x2ab988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2AB984u, 0x2AB98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB98Cu;
label_2ab98c:
    // 0x2ab98c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ab98cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ab990:
    // 0x2ab990: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ab990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab994: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab998: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB998u;
        // 0x2ab99c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB9A0u;
}
