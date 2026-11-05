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

// Function: sub_00200F38
// Address: 0x200f38 - 0x200fc0
void sub_00200F38_0x200f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200F38_0x200f38");
#endif

    switch (ctx->pc) {
        case 0x200f54u: goto label_200f54;
        case 0x200f70u: goto label_200f70;
        case 0x200f8cu: goto label_200f8c;
        case 0x200f9cu: goto label_200f9c;
        default: break;
    }

    ctx->pc = 0x200f38u;

    // 0x200f38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x200f3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200f40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x200f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x200f44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x200f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x200f4c: 0xc0803ae  jal         func_200EB8
    ctx->pc = 0x200F4Cu;
    SET_GPR_U32(ctx, 31, 0x200F54u);
    ctx->pc = 0x200F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F4Cu;
    // 0x200f50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200EB8u, 0x200F4Cu, 0x200F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F54u;
label_200f54:
    // 0x200f54: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x200F54u;
    {
        const bool branch_taken_0x200f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F54u;
        // 0x200f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f54) {
            ctx->pc = 0x200FACu;
            goto label_200fac;
        }
    }
    ctx->pc = 0x200F5Cu;
    // 0x200f5c: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x200f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x200f60: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x200F60u;
    {
        const bool branch_taken_0x200f60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x200f60) {
            ctx->pc = 0x200F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200F60u;
            // 0x200f64: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200F7Cu;
            goto label_200f7c;
        }
    }
    ctx->pc = 0x200F68u;
    // 0x200f68: 0xc081a5e  jal         func_206978
    ctx->pc = 0x200F68u;
    SET_GPR_U32(ctx, 31, 0x200F70u);
    ctx->pc = 0x206978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206978u, 0x200F68u, 0x200F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F70u;
label_200f70:
    // 0x200f70: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x200F70u;
    {
        const bool branch_taken_0x200f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F70u;
        // 0x200f74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f70) {
            ctx->pc = 0x200FACu;
            goto label_200fac;
        }
    }
    ctx->pc = 0x200F78u;
    // 0x200f78: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x200f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_200f7c:
    // 0x200f7c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x200F7Cu;
    {
        const bool branch_taken_0x200f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x200F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F7Cu;
        // 0x200f80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f7c) {
            ctx->pc = 0x200FACu;
            goto label_200fac;
        }
    }
    ctx->pc = 0x200F84u;
    // 0x200f84: 0xc081a5e  jal         func_206978
    ctx->pc = 0x200F84u;
    SET_GPR_U32(ctx, 31, 0x200F8Cu);
    ctx->pc = 0x206978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206978u, 0x200F84u, 0x200F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F8Cu;
label_200f8c:
    // 0x200f8c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x200F8Cu;
    {
        const bool branch_taken_0x200f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200f8c) {
            ctx->pc = 0x200F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200F8Cu;
            // 0x200f90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200FACu;
            goto label_200fac;
        }
    }
    ctx->pc = 0x200F94u;
    // 0x200f94: 0xc081cf8  jal         func_2073E0
    ctx->pc = 0x200F94u;
    SET_GPR_U32(ctx, 31, 0x200F9Cu);
    ctx->pc = 0x200F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F94u;
    // 0x200f98: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2073E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2073E0u, 0x200F94u, 0x200F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F9Cu;
label_200f9c:
    // 0x200f9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x200f9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fa0: 0x10710002  beq         $v1, $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x200FA0u;
    {
        const bool branch_taken_0x200fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x200FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200FA0u;
        // 0x200fa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200fa0) {
            ctx->pc = 0x200FACu;
            goto label_200fac;
        }
    }
    ctx->pc = 0x200FA8u;
    // 0x200fa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200fac:
    // 0x200fac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200fb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200fb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200fb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x200fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x200FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200FB8u;
        // 0x200fbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200FC0u;
}
