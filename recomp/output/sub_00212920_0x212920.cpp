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

// Function: sub_00212920
// Address: 0x212920 - 0x212978
void sub_00212920_0x212920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212920_0x212920");
#endif

    switch (ctx->pc) {
        case 0x212950u: goto label_212950;
        default: break;
    }

    ctx->pc = 0x212920u;

    // 0x212920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212928: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x212928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21292c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21292cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212930: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x212930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x212934: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x212934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212938: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x212938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21293c: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x21293cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x212940: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x212940u;
    {
        const bool branch_taken_0x212940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212940u;
        // 0x212944: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212940) {
            ctx->pc = 0x21295Cu;
            goto label_21295c;
        }
    }
    ctx->pc = 0x212948u;
    // 0x212948: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x212948u;
    SET_GPR_U32(ctx, 31, 0x212950u);
    ctx->pc = 0x21294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212948u;
    // 0x21294c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x212948u, 0x212950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212950u;
label_212950:
    // 0x212950: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x212950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x212954: 0xae2200cc  sw          $v0, 0xCC($s1)
    ctx->pc = 0x212954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
    // 0x212958: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x212958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_21295c:
    // 0x21295c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21295cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212960: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x212960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212964: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x212964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212968: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x212968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21296c: 0x3e00008  jr          $ra
    ctx->pc = 0x21296Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21296Cu;
        // 0x212970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21296Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212974u;
    // 0x212974: 0x0  nop
    ctx->pc = 0x212974u;
    // NOP
    ctx->pc = 0x212978u;
}
