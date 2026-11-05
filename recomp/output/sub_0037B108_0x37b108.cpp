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

// Function: sub_0037B108
// Address: 0x37b108 - 0x37b1a8
void sub_0037B108_0x37b108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B108_0x37b108");
#endif

    switch (ctx->pc) {
        case 0x37b150u: goto label_37b150;
        case 0x37b190u: goto label_37b190;
        default: break;
    }

    ctx->pc = 0x37b108u;

    // 0x37b108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37b108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b10c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37b110: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37b110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37b114: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x37b114u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x37b118: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x37b118u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x37b11c: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x37b11cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x37b120: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x37B120u;
    {
        const bool branch_taken_0x37b120 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x37B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B120u;
        // 0x37b124: 0xe7af000c  swc1        $f15, 0xC($sp) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b120) {
            ctx->pc = 0x37B168u;
            goto label_37b168;
        }
    }
    ctx->pc = 0x37B128u;
    // 0x37b128: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x37b128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37b12c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37B12Cu;
    {
        const bool branch_taken_0x37b12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B12Cu;
        // 0x37b130: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b12c) {
            ctx->pc = 0x37B144u;
            goto label_37b144;
        }
    }
    ctx->pc = 0x37B134u;
    // 0x37b134: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x37B134u;
    {
        const bool branch_taken_0x37b134 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x37B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B134u;
        // 0x37b138: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b134) {
            ctx->pc = 0x37B160u;
            goto label_37b160;
        }
    }
    ctx->pc = 0x37B13Cu;
    // 0x37b13c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x37B13Cu;
    {
        const bool branch_taken_0x37b13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b13c) {
            ctx->pc = 0x37B188u;
            goto label_37b188;
        }
    }
    ctx->pc = 0x37B144u;
label_37b144:
    // 0x37b144: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37b144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37b148: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x37B148u;
    {
        const bool branch_taken_0x37b148 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x37B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B148u;
        // 0x37b14c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b148) {
            ctx->pc = 0x37B174u;
            goto label_37b174;
        }
    }
    ctx->pc = 0x37B150u;
label_37b150:
    // 0x37b150: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x37B150u;
    {
        const bool branch_taken_0x37b150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x37B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B150u;
        // 0x37b154: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b150) {
            ctx->pc = 0x37B180u;
            goto label_37b180;
        }
    }
    ctx->pc = 0x37B158u;
    // 0x37b158: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37B158u;
    {
        const bool branch_taken_0x37b158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b158) {
            ctx->pc = 0x37B188u;
            goto label_37b188;
        }
    }
    ctx->pc = 0x37B160u;
label_37b160:
    // 0x37b160: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37B160u;
    {
        const bool branch_taken_0x37b160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B160u;
        // 0x37b164: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b160) {
            ctx->pc = 0x37B190u;
            goto label_37b190;
        }
    }
    ctx->pc = 0x37B168u;
label_37b168:
    // 0x37b168: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x37b168u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b16c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37B16Cu;
    {
        const bool branch_taken_0x37b16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B16Cu;
        // 0x37b170: 0x7c820010  sq          $v0, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b16c) {
            ctx->pc = 0x37B190u;
            goto label_37b190;
        }
    }
    ctx->pc = 0x37B174u;
label_37b174:
    // 0x37b174: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x37b174u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b178: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37B178u;
    {
        const bool branch_taken_0x37b178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B178u;
        // 0x37b17c: 0x7c820020  sq          $v0, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b178) {
            ctx->pc = 0x37B190u;
            goto label_37b190;
        }
    }
    ctx->pc = 0x37B180u;
label_37b180:
    // 0x37b180: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37B180u;
    {
        const bool branch_taken_0x37b180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B180u;
        // 0x37b184: 0x7c820030  sq          $v0, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b180) {
            ctx->pc = 0x37B190u;
            goto label_37b190;
        }
    }
    ctx->pc = 0x37B188u;
label_37b188:
    // 0x37b188: 0xc0dec24  jal         func_37B090
    ctx->pc = 0x37B188u;
    SET_GPR_U32(ctx, 31, 0x37B190u);
    ctx->pc = 0x37B18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B188u;
    // 0x37b18c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B090u, 0x37B188u, 0x37B190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B190u;
label_37b190:
    // 0x37b190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37b190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b194: 0x3e00008  jr          $ra
    ctx->pc = 0x37B194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B194u;
        // 0x37b198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B19Cu;
    // 0x37b19c: 0x0  nop
    ctx->pc = 0x37b19cu;
    // NOP
    // 0x37b1a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x37b1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37b1a4: 0x0  nop
    ctx->pc = 0x37b1a4u;
    // NOP
    ctx->pc = 0x37b1a8u;
}
