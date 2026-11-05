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

// Function: sub_002DC0F8
// Address: 0x2dc0f8 - 0x2dc208
void sub_002DC0F8_0x2dc0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC0F8_0x2dc0f8");
#endif

    switch (ctx->pc) {
        case 0x2dc138u: goto label_2dc138;
        case 0x2dc140u: goto label_2dc140;
        case 0x2dc178u: goto label_2dc178;
        case 0x2dc190u: goto label_2dc190;
        case 0x2dc1b0u: goto label_2dc1b0;
        case 0x2dc1c0u: goto label_2dc1c0;
        default: break;
    }

    ctx->pc = 0x2dc0f8u;

    // 0x2dc0f8: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x2dc0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
    // 0x2dc0fc: 0xffb00400  sd          $s0, 0x400($sp)
    ctx->pc = 0x2dc0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 16));
    // 0x2dc100: 0xffb10408  sd          $s1, 0x408($sp)
    ctx->pc = 0x2dc100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1032), GPR_U64(ctx, 17));
    // 0x2dc104: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2dc104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc108: 0xffb40420  sd          $s4, 0x420($sp)
    ctx->pc = 0x2dc108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 20));
    // 0x2dc10c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dc10cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc110: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2dc110u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc114: 0xffb20410  sd          $s2, 0x410($sp)
    ctx->pc = 0x2dc114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 18));
    // 0x2dc118: 0xffb30418  sd          $s3, 0x418($sp)
    ctx->pc = 0x2dc118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1048), GPR_U64(ctx, 19));
    // 0x2dc11c: 0xffb50428  sd          $s5, 0x428($sp)
    ctx->pc = 0x2dc11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1064), GPR_U64(ctx, 21));
    // 0x2dc120: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dc120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc124: 0xffb60430  sd          $s6, 0x430($sp)
    ctx->pc = 0x2dc124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 22));
    // 0x2dc128: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2dc128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc12c: 0xffbf0438  sd          $ra, 0x438($sp)
    ctx->pc = 0x2dc12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1080), GPR_U64(ctx, 31));
    // 0x2dc130: 0xc0b6f9a  jal         func_2DBE68
    ctx->pc = 0x2DC130u;
    SET_GPR_U32(ctx, 31, 0x2DC138u);
    ctx->pc = 0x2DC134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC130u;
    // 0x2dc134: 0x241201ff  addiu       $s2, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBE68u, 0x2DC130u, 0x2DC138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC138u;
label_2dc138:
    // 0x2dc138: 0xc0aedb0  jal         func_2BB6C0
    ctx->pc = 0x2DC138u;
    SET_GPR_U32(ctx, 31, 0x2DC140u);
    ctx->pc = 0x2DC13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC138u;
    // 0x2dc13c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB6C0u, 0x2DC138u, 0x2DC140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC140u;
label_2dc140:
    // 0x2dc140: 0x28430201  slti        $v1, $v0, 0x201
    ctx->pc = 0x2dc140u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x2dc144: 0x43900b  movn        $s2, $v0, $v1
    ctx->pc = 0x2dc144u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x2dc148: 0x2652fffe  addiu       $s2, $s2, -0x2
    ctx->pc = 0x2dc148u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x2dc14c: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x2dc14cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dc150: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DC150u;
    {
        const bool branch_taken_0x2dc150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC150u;
        // 0x2dc154: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc150) {
            ctx->pc = 0x2DC1E0u;
            goto label_2dc1e0;
        }
    }
    ctx->pc = 0x2DC158u;
    // 0x2dc158: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2dc158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2dc15c: 0x141a80  sll         $v1, $s4, 10
    ctx->pc = 0x2dc15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 10));
    // 0x2dc160: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x2dc160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2dc164: 0x24630490  addiu       $v1, $v1, 0x490
    ctx->pc = 0x2dc164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1168));
    // 0x2dc168: 0x909821  addu        $s3, $a0, $s0
    ctx->pc = 0x2dc168u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2dc16c: 0x71a821  addu        $s5, $v1, $s1
    ctx->pc = 0x2dc16cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2dc170: 0x5d8021  addu        $s0, $v0, $sp
    ctx->pc = 0x2dc170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2dc174: 0x2416002d  addiu       $s6, $zero, 0x2D
    ctx->pc = 0x2dc174u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2dc178:
    // 0x2dc178: 0xc62c63c8  lwc1        $f12, 0x63C8($s1)
    ctx->pc = 0x2dc178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 25544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dc17c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dc17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc180: 0x8e2563c4  lw          $a1, 0x63C4($s1)
    ctx->pc = 0x2dc180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25540)));
    // 0x2dc184: 0xa6160000  sh          $s6, 0x0($s0)
    ctx->pc = 0x2dc184u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 22));
    // 0x2dc188: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x2DC188u;
    SET_GPR_U32(ctx, 31, 0x2DC190u);
    ctx->pc = 0x2DC18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC188u;
    // 0x2dc18c: 0xa6000002  sh          $zero, 0x2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x2DC188u, 0x2DC190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC190u;
label_2dc190:
    // 0x2dc190: 0xc6210418  lwc1        $f1, 0x418($s1)
    ctx->pc = 0x2dc190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc194: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dc194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc198: 0x0  nop
    ctx->pc = 0x2dc198u;
    // NOP
    // 0x2dc19c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2DC19Cu;
    {
        const bool branch_taken_0x2dc19c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DC1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC19Cu;
        // 0x2dc1a0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc19c) {
            ctx->pc = 0x2DC1C8u;
            goto label_2dc1c8;
        }
    }
    ctx->pc = 0x2DC1A4u;
    // 0x2dc1a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2dc1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1a8: 0xc0b6f7e  jal         func_2DBDF8
    ctx->pc = 0x2DC1A8u;
    SET_GPR_U32(ctx, 31, 0x2DC1B0u);
    ctx->pc = 0x2DC1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC1A8u;
    // 0x2dc1ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBDF8u, 0x2DC1A8u, 0x2DC1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC1B0u;
label_2dc1b0:
    // 0x2dc1b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dc1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2dc1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1b8: 0xc0b6fd8  jal         func_2DBF60
    ctx->pc = 0x2DC1B8u;
    SET_GPR_U32(ctx, 31, 0x2DC1C0u);
    ctx->pc = 0x2DC1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC1B8u;
    // 0x2dc1bc: 0x26860001  addiu       $a2, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF60u, 0x2DC1B8u, 0x2DC1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC1C0u;
label_2dc1c0:
    // 0x2dc1c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DC1C0u;
    {
        const bool branch_taken_0x2dc1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1C0u;
        // 0x2dc1c4: 0xdfb00400  ld          $s0, 0x400($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc1c0) {
            ctx->pc = 0x2DC1E4u;
            goto label_2dc1e4;
        }
    }
    ctx->pc = 0x2DC1C8u;
label_2dc1c8:
    // 0x2dc1c8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2dc1c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2dc1cc: 0x2673fffe  addiu       $s3, $s3, -0x2
    ctx->pc = 0x2dc1ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x2dc1d0: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x2dc1d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dc1d4: 0x1040ffe8  beqz        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2DC1D4u;
    {
        const bool branch_taken_0x2dc1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1D4u;
        // 0x2dc1d8: 0x2610fffe  addiu       $s0, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc1d4) {
            ctx->pc = 0x2DC178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc178;
        }
    }
    ctx->pc = 0x2DC1DCu;
    // 0x2dc1dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2dc1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2dc1e0:
    // 0x2dc1e0: 0xdfb00400  ld          $s0, 0x400($sp)
    ctx->pc = 0x2dc1e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
label_2dc1e4:
    // 0x2dc1e4: 0xdfb10408  ld          $s1, 0x408($sp)
    ctx->pc = 0x2dc1e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1032)));
    // 0x2dc1e8: 0xdfb20410  ld          $s2, 0x410($sp)
    ctx->pc = 0x2dc1e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x2dc1ec: 0xdfb30418  ld          $s3, 0x418($sp)
    ctx->pc = 0x2dc1ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1048)));
    // 0x2dc1f0: 0xdfb40420  ld          $s4, 0x420($sp)
    ctx->pc = 0x2dc1f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x2dc1f4: 0xdfb50428  ld          $s5, 0x428($sp)
    ctx->pc = 0x2dc1f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1064)));
    // 0x2dc1f8: 0xdfb60430  ld          $s6, 0x430($sp)
    ctx->pc = 0x2dc1f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x2dc1fc: 0xdfbf0438  ld          $ra, 0x438($sp)
    ctx->pc = 0x2dc1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1080)));
    // 0x2dc200: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC200u;
        // 0x2dc204: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC208u;
}
