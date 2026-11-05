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

// Function: sub_00153228
// Address: 0x153228 - 0x1532b8
void sub_00153228_0x153228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153228_0x153228");
#endif

    switch (ctx->pc) {
        case 0x15324cu: goto label_15324c;
        case 0x153258u: goto label_153258;
        case 0x153264u: goto label_153264;
        case 0x153270u: goto label_153270;
        case 0x15327cu: goto label_15327c;
        case 0x153288u: goto label_153288;
        case 0x153294u: goto label_153294;
        case 0x1532a4u: goto label_1532a4;
        default: break;
    }

    ctx->pc = 0x153228u;

    // 0x153228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x153228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15322c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15322cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x153230: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x153230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x153234: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x153234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15323c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15323cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153240: 0xae260468  sw          $a2, 0x468($s1)
    ctx->pc = 0x153240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1128), GPR_U32(ctx, 6));
    // 0x153244: 0xc046044  jal         func_118110
    ctx->pc = 0x153244u;
    SET_GPR_U32(ctx, 31, 0x15324Cu);
    ctx->pc = 0x153248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153244u;
    // 0x153248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x153244u, 0x15324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15324Cu;
label_15324c:
    // 0x15324c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15324cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153250: 0xc046002  jal         func_118008
    ctx->pc = 0x153250u;
    SET_GPR_U32(ctx, 31, 0x153258u);
    ctx->pc = 0x153254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153250u;
    // 0x153254: 0xae220664  sw          $v0, 0x664($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1636), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x153250u, 0x153258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153258u;
label_153258:
    // 0x153258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15325c: 0xc04611e  jal         func_118478
    ctx->pc = 0x15325Cu;
    SET_GPR_U32(ctx, 31, 0x153264u);
    ctx->pc = 0x153260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15325Cu;
    // 0x153260: 0xae220660  sw          $v0, 0x660($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1632), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118478u, 0x15325Cu, 0x153264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153264u;
label_153264:
    // 0x153264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153268: 0xc0460e4  jal         func_118390
    ctx->pc = 0x153268u;
    SET_GPR_U32(ctx, 31, 0x153270u);
    ctx->pc = 0x15326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153268u;
    // 0x15326c: 0xae220668  sw          $v0, 0x668($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1640), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118390u, 0x153268u, 0x153270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153270u;
label_153270:
    // 0x153270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153274: 0xc0462fc  jal         func_118BF0
    ctx->pc = 0x153274u;
    SET_GPR_U32(ctx, 31, 0x15327Cu);
    ctx->pc = 0x153278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153274u;
    // 0x153278: 0xae22066c  sw          $v0, 0x66C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1644), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118BF0u, 0x153274u, 0x15327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15327Cu;
label_15327c:
    // 0x15327c: 0xae220670  sw          $v0, 0x670($s1)
    ctx->pc = 0x15327cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
    // 0x153280: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x153280u;
    SET_GPR_U32(ctx, 31, 0x153288u);
    ctx->pc = 0x153284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153280u;
    // 0x153284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x153280u, 0x153288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153288u;
label_153288:
    // 0x153288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15328c: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x15328Cu;
    SET_GPR_U32(ctx, 31, 0x153294u);
    ctx->pc = 0x153290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15328Cu;
    // 0x153290: 0xe6200674  swc1        $f0, 0x674($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x15328Cu, 0x153294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153294u;
label_153294:
    // 0x153294: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x153294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x153298: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x153298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15329c: 0xc042136  jal         func_1084D8
    ctx->pc = 0x15329Cu;
    SET_GPR_U32(ctx, 31, 0x1532A4u);
    ctx->pc = 0x1532A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15329Cu;
    // 0x1532a0: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x15329Cu, 0x1532A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1532A4u;
label_1532a4:
    // 0x1532a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1532a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1532a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1532a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1532ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1532acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1532b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1532B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1532B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532B0u;
        // 0x1532b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1532B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1532B8u;
}
