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

// Function: sub_003CA1E0
// Address: 0x3ca1e0 - 0x3ca268
void sub_003CA1E0_0x3ca1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA1E0_0x3ca1e0");
#endif

    switch (ctx->pc) {
        case 0x3ca218u: goto label_3ca218;
        case 0x3ca22cu: goto label_3ca22c;
        default: break;
    }

    ctx->pc = 0x3ca1e0u;

    // 0x3ca1e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ca1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3ca1e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3ca1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3ca1e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3ca1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3ca1ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3ca1ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca1f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ca1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3ca1f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ca1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca1f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ca1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ca1fc: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x3ca1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x3ca200: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3ca200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3ca204: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3ca204u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3ca208: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CA208u;
    {
        const bool branch_taken_0x3ca208 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca208) {
            ctx->pc = 0x3CA218u;
            goto label_3ca218;
        }
    }
    ctx->pc = 0x3CA210u;
    // 0x3ca210: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3CA210u;
    SET_GPR_U32(ctx, 31, 0x3CA218u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3CA210u, 0x3CA218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA218u;
label_3ca218:
    // 0x3ca218: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3ca218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3ca21c: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x3ca21cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x3ca220: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x3ca220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x3ca224: 0xc0f284e  jal         func_3CA138
    ctx->pc = 0x3CA224u;
    SET_GPR_U32(ctx, 31, 0x3CA22Cu);
    ctx->pc = 0x3CA228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA224u;
    // 0x3ca228: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA138u, 0x3CA224u, 0x3CA22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA22Cu;
label_3ca22c:
    // 0x3ca22c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CA22Cu;
    {
        const bool branch_taken_0x3ca22c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA22Cu;
        // 0x3ca230: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca22c) {
            ctx->pc = 0x3CA248u;
            goto label_3ca248;
        }
    }
    ctx->pc = 0x3CA234u;
    // 0x3ca234: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3ca234u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ca238: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3ca238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ca23c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ca23cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ca240: 0x80f401a  j           func_3D0068
    ctx->pc = 0x3CA240u;
    ctx->pc = 0x3CA244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA240u;
    // 0x3ca244: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0068u;
    sub_003D0068_0x3d0068(rdram, ctx, runtime); return;
    ctx->pc = 0x3CA248u;
label_3ca248:
    // 0x3ca248: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3ca248u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ca24c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3ca24cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ca250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ca250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ca254: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA254u;
        // 0x3ca258: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA25Cu;
    // 0x3ca25c: 0x0  nop
    ctx->pc = 0x3ca25cu;
    // NOP
    // 0x3ca260: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3ca260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3ca264: 0x0  nop
    ctx->pc = 0x3ca264u;
    // NOP
    ctx->pc = 0x3ca268u;
}
