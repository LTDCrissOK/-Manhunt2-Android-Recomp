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

// Function: sub_00176F40
// Address: 0x176f40 - 0x176fe8
void sub_00176F40_0x176f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176F40_0x176f40");
#endif

    switch (ctx->pc) {
        case 0x176f40u: goto label_176f40;
        case 0x176f44u: goto label_176f44;
        case 0x176f48u: goto label_176f48;
        case 0x176f4cu: goto label_176f4c;
        case 0x176f50u: goto label_176f50;
        case 0x176f54u: goto label_176f54;
        case 0x176f58u: goto label_176f58;
        case 0x176f5cu: goto label_176f5c;
        case 0x176f60u: goto label_176f60;
        case 0x176f64u: goto label_176f64;
        case 0x176f68u: goto label_176f68;
        case 0x176f6cu: goto label_176f6c;
        case 0x176f70u: goto label_176f70;
        case 0x176f74u: goto label_176f74;
        case 0x176f78u: goto label_176f78;
        case 0x176f7cu: goto label_176f7c;
        case 0x176f80u: goto label_176f80;
        case 0x176f84u: goto label_176f84;
        case 0x176f88u: goto label_176f88;
        case 0x176f8cu: goto label_176f8c;
        case 0x176f90u: goto label_176f90;
        case 0x176f94u: goto label_176f94;
        case 0x176f98u: goto label_176f98;
        case 0x176f9cu: goto label_176f9c;
        case 0x176fa0u: goto label_176fa0;
        case 0x176fa4u: goto label_176fa4;
        case 0x176fa8u: goto label_176fa8;
        case 0x176facu: goto label_176fac;
        case 0x176fb0u: goto label_176fb0;
        case 0x176fb4u: goto label_176fb4;
        case 0x176fb8u: goto label_176fb8;
        case 0x176fbcu: goto label_176fbc;
        case 0x176fc0u: goto label_176fc0;
        case 0x176fc4u: goto label_176fc4;
        case 0x176fc8u: goto label_176fc8;
        case 0x176fccu: goto label_176fcc;
        case 0x176fd0u: goto label_176fd0;
        case 0x176fd4u: goto label_176fd4;
        case 0x176fd8u: goto label_176fd8;
        case 0x176fdcu: goto label_176fdc;
        case 0x176fe0u: goto label_176fe0;
        case 0x176fe4u: goto label_176fe4;
        default: break;
    }

    ctx->pc = 0x176f40u;

label_176f40:
    // 0x176f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_176f44:
    // 0x176f44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x176f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_176f48:
    // 0x176f48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x176f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_176f4c:
    // 0x176f4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x176f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_176f50:
    // 0x176f50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x176f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_176f54:
    // 0x176f54: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x176f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_176f58:
    // 0x176f58: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x176f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_176f5c:
    // 0x176f5c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x176f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_176f60:
    // 0x176f60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_176f64:
    if (ctx->pc == 0x176F64u) {
        ctx->pc = 0x176F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F60u;
        // 0x176f64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176F68u;
        goto label_176f68;
    }
    ctx->pc = 0x176F60u;
    {
        const bool branch_taken_0x176f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x176F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F60u;
        // 0x176f64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f60) {
            ctx->pc = 0x176F70u;
            goto label_176f70;
        }
    }
    ctx->pc = 0x176F68u;
label_176f68:
    // 0x176f68: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_176f6c:
    if (ctx->pc == 0x176F6Cu) {
        ctx->pc = 0x176F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F68u;
        // 0x176f6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176F70u;
        goto label_176f70;
    }
    ctx->pc = 0x176F68u;
    {
        const bool branch_taken_0x176f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x176f68) {
            ctx->pc = 0x176F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176F68u;
            // 0x176f6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176FD4u;
            goto label_176fd4;
        }
    }
    ctx->pc = 0x176F70u;
label_176f70:
    // 0x176f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176f74:
    // 0x176f74: 0xc04f9a4  jal         func_13E690
label_176f78:
    if (ctx->pc == 0x176F78u) {
        ctx->pc = 0x176F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F74u;
        // 0x176f78: 0x2412000d  addiu       $s2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176F7Cu;
        goto label_176f7c;
    }
    ctx->pc = 0x176F74u;
    SET_GPR_U32(ctx, 31, 0x176F7Cu);
    ctx->pc = 0x176F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176F74u;
    // 0x176f78: 0x2412000d  addiu       $s2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x176F74u, 0x176F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F7Cu;
label_176f7c:
    // 0x176f7c: 0xae1200b4  sw          $s2, 0xB4($s0)
    ctx->pc = 0x176f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 18));
label_176f80:
    // 0x176f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176f84:
    // 0x176f84: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x176f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_176f88:
    // 0x176f88: 0xc04f8fc  jal         func_13E3F0
label_176f8c:
    if (ctx->pc == 0x176F8Cu) {
        ctx->pc = 0x176F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F88u;
        // 0x176f8c: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176F90u;
        goto label_176f90;
    }
    ctx->pc = 0x176F88u;
    SET_GPR_U32(ctx, 31, 0x176F90u);
    ctx->pc = 0x176F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176F88u;
    // 0x176f8c: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x176F88u, 0x176F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F90u;
label_176f90:
    // 0x176f90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x176f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176f94:
    // 0x176f94: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x176f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_176f98:
    // 0x176f98: 0xc045fea  jal         func_117FA8
label_176f9c:
    if (ctx->pc == 0x176F9Cu) {
        ctx->pc = 0x176F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F98u;
        // 0x176f9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176FA0u;
        goto label_176fa0;
    }
    ctx->pc = 0x176F98u;
    SET_GPR_U32(ctx, 31, 0x176FA0u);
    ctx->pc = 0x176F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176F98u;
    // 0x176f9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x176F98u, 0x176FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176FA0u;
label_176fa0:
    // 0x176fa0: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x176fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_176fa4:
    // 0x176fa4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_176fa8:
    if (ctx->pc == 0x176FA8u) {
        ctx->pc = 0x176FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FA4u;
        // 0x176fa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176FACu;
        goto label_176fac;
    }
    ctx->pc = 0x176FA4u;
    {
        const bool branch_taken_0x176fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FA4u;
        // 0x176fa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176fa4) {
            ctx->pc = 0x176FB4u;
            goto label_176fb4;
        }
    }
    ctx->pc = 0x176FACu;
label_176fac:
    // 0x176fac: 0xc046058  jal         func_118160
label_176fb0:
    if (ctx->pc == 0x176FB0u) {
        ctx->pc = 0x176FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FACu;
        // 0x176fb0: 0x260500c0  addiu       $a1, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176FB4u;
        goto label_176fb4;
    }
    ctx->pc = 0x176FACu;
    SET_GPR_U32(ctx, 31, 0x176FB4u);
    ctx->pc = 0x176FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176FACu;
    // 0x176fb0: 0x260500c0  addiu       $a1, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x176FACu, 0x176FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176FB4u;
label_176fb4:
    // 0x176fb4: 0xae320054  sw          $s2, 0x54($s1)
    ctx->pc = 0x176fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 18));
label_176fb8:
    // 0x176fb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x176fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176fbc:
    // 0x176fbc: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x176fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_176fc0:
    // 0x176fc0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x176fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_176fc4:
    // 0x176fc4: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x176fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_176fc8:
    // 0x176fc8: 0x40f809  jalr        $v0
label_176fcc:
    if (ctx->pc == 0x176FCCu) {
        ctx->pc = 0x176FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FC8u;
        // 0x176fcc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176FD0u;
        goto label_176fd0;
    }
    ctx->pc = 0x176FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176FD0u);
        ctx->pc = 0x176FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FC8u;
        // 0x176fcc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176FC8u, 0x176FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x176FD0u;
label_176fd0:
    // 0x176fd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176fd4:
    // 0x176fd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176fd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_176fd8:
    // 0x176fd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x176fd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176fdc:
    // 0x176fdc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x176fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_176fe0:
    // 0x176fe0: 0x3e00008  jr          $ra
label_176fe4:
    if (ctx->pc == 0x176FE4u) {
        ctx->pc = 0x176FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FE0u;
        // 0x176fe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176FE8u;
        goto label_fallthrough_0x176fe0;
    }
    ctx->pc = 0x176FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FE0u;
        // 0x176fe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x176fe0:
    ctx->pc = 0x176FE8u;
}
