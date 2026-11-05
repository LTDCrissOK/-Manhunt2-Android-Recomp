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

// Function: sub_00282338
// Address: 0x282338 - 0x282798
void sub_00282338_0x282338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282338_0x282338");
#endif

    switch (ctx->pc) {
        case 0x282358u: goto label_282358;
        case 0x282394u: goto label_282394;
        case 0x2823b0u: goto label_2823b0;
        case 0x2823ccu: goto label_2823cc;
        case 0x2823e8u: goto label_2823e8;
        case 0x282404u: goto label_282404;
        case 0x282420u: goto label_282420;
        case 0x28243cu: goto label_28243c;
        case 0x282458u: goto label_282458;
        case 0x282474u: goto label_282474;
        case 0x282490u: goto label_282490;
        case 0x2824acu: goto label_2824ac;
        case 0x2824c8u: goto label_2824c8;
        case 0x2824e4u: goto label_2824e4;
        case 0x282500u: goto label_282500;
        case 0x28251cu: goto label_28251c;
        case 0x282538u: goto label_282538;
        case 0x282554u: goto label_282554;
        case 0x282570u: goto label_282570;
        case 0x28258cu: goto label_28258c;
        case 0x2825a8u: goto label_2825a8;
        case 0x2825c4u: goto label_2825c4;
        case 0x2825e0u: goto label_2825e0;
        case 0x2825fcu: goto label_2825fc;
        case 0x282618u: goto label_282618;
        case 0x282634u: goto label_282634;
        case 0x282650u: goto label_282650;
        case 0x28266cu: goto label_28266c;
        case 0x282688u: goto label_282688;
        case 0x2826a4u: goto label_2826a4;
        case 0x2826c0u: goto label_2826c0;
        case 0x2826dcu: goto label_2826dc;
        case 0x2826f8u: goto label_2826f8;
        case 0x282714u: goto label_282714;
        case 0x282730u: goto label_282730;
        case 0x28274cu: goto label_28274c;
        case 0x282768u: goto label_282768;
        case 0x282784u: goto label_282784;
        default: break;
    }

    ctx->pc = 0x282338u;

    // 0x282338: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x282338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28233c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28233cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x282340: 0x2443b2e0  addiu       $v1, $v0, -0x4D20
    ctx->pc = 0x282340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947552));
    // 0x282344: 0xac40b2e0  sw          $zero, -0x4D20($v0)
    ctx->pc = 0x282344u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BB2E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB2E0u, _value); } while (0);
    // 0x282348: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x282348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28234c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x28234cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x282350: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x282350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x282354: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x282354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_282358:
    // 0x282358: 0xac60fff0  sw          $zero, -0x10($v1)
    ctx->pc = 0x282358u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), GPR_U32(ctx, 0));
    // 0x28235c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28235cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x282360: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x282360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x282364: 0x0  nop
    ctx->pc = 0x282364u;
    // NOP
    // 0x282368: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x282368u;
    {
        const bool branch_taken_0x282368 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282368u;
        // 0x28236c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282368) {
            ctx->pc = 0x282358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282358;
        }
    }
    ctx->pc = 0x282370u;
    // 0x282370: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x282370u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x282374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x282374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282378: 0x2610bf78  addiu       $s0, $s0, -0x4088
    ctx->pc = 0x282378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950776));
    // 0x28237c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28237cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282384: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x282384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282388: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282388u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28238c: 0xc0a0892  jal         func_282248
    ctx->pc = 0x28238Cu;
    SET_GPR_U32(ctx, 31, 0x282394u);
    ctx->pc = 0x282390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28238Cu;
    // 0x282390: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x28238Cu, 0x282394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282394u;
label_282394:
    // 0x282394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282398: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x282398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28239c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28239cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2823a0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2823a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2823a4: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2823a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2823a8: 0xc0a0892  jal         func_282248
    ctx->pc = 0x2823A8u;
    SET_GPR_U32(ctx, 31, 0x2823B0u);
    ctx->pc = 0x2823ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2823A8u;
    // 0x2823ac: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x2823A8u, 0x2823B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2823B0u;
label_2823b0:
    // 0x2823b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2823b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2823b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2823b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2823b8: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x2823b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2823bc: 0x240700c8  addiu       $a3, $zero, 0xC8
    ctx->pc = 0x2823bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2823c0: 0x240800c8  addiu       $t0, $zero, 0xC8
    ctx->pc = 0x2823c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2823c4: 0xc0a0892  jal         func_282248
    ctx->pc = 0x2823C4u;
    SET_GPR_U32(ctx, 31, 0x2823CCu);
    ctx->pc = 0x2823C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2823C4u;
    // 0x2823c8: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x2823C4u, 0x2823CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2823CCu;
label_2823cc:
    // 0x2823cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2823ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2823d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2823d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2823d4: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x2823d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2823d8: 0x24070096  addiu       $a3, $zero, 0x96
    ctx->pc = 0x2823d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2823dc: 0x24080096  addiu       $t0, $zero, 0x96
    ctx->pc = 0x2823dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2823e0: 0xc0a0892  jal         func_282248
    ctx->pc = 0x2823E0u;
    SET_GPR_U32(ctx, 31, 0x2823E8u);
    ctx->pc = 0x2823E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2823E0u;
    // 0x2823e4: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x2823E0u, 0x2823E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2823E8u;
label_2823e8:
    // 0x2823e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2823e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2823ec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2823ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2823f0: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2823f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2823f4: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2823f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2823f8: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x2823f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2823fc: 0xc0a0892  jal         func_282248
    ctx->pc = 0x2823FCu;
    SET_GPR_U32(ctx, 31, 0x282404u);
    ctx->pc = 0x282400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2823FCu;
    // 0x282400: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x2823FCu, 0x282404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282404u;
label_282404:
    // 0x282404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282408: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x282408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28240c: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x28240cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x282410: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x282410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x282414: 0x24080032  addiu       $t0, $zero, 0x32
    ctx->pc = 0x282414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x282418: 0xc0a0892  jal         func_282248
    ctx->pc = 0x282418u;
    SET_GPR_U32(ctx, 31, 0x282420u);
    ctx->pc = 0x28241Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282418u;
    // 0x28241c: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x282418u, 0x282420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282420u;
label_282420:
    // 0x282420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282424: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x282424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x282428: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x282428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x28242c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x28242cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x282430: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282430u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282434: 0xc0a0892  jal         func_282248
    ctx->pc = 0x282434u;
    SET_GPR_U32(ctx, 31, 0x28243Cu);
    ctx->pc = 0x282438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282434u;
    // 0x282438: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x282434u, 0x28243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28243Cu;
label_28243c:
    // 0x28243c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28243cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282440: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x282440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x282444: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x282444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x282448: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x282448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28244c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28244cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282450: 0xc0a0892  jal         func_282248
    ctx->pc = 0x282450u;
    SET_GPR_U32(ctx, 31, 0x282458u);
    ctx->pc = 0x282454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282450u;
    // 0x282454: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x282450u, 0x282458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282458u;
label_282458:
    // 0x282458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28245c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x28245cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x282460: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x282460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x282464: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x282464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282468: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282468u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28246c: 0xc0a0892  jal         func_282248
    ctx->pc = 0x28246Cu;
    SET_GPR_U32(ctx, 31, 0x282474u);
    ctx->pc = 0x282470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28246Cu;
    // 0x282470: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x28246Cu, 0x282474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282474u;
label_282474:
    // 0x282474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282478: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x282478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x28247c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x28247cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x282480: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x282480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282484: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282484u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282488: 0xc0a0892  jal         func_282248
    ctx->pc = 0x282488u;
    SET_GPR_U32(ctx, 31, 0x282490u);
    ctx->pc = 0x28248Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282488u;
    // 0x28248c: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x282488u, 0x282490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282490u;
label_282490:
    // 0x282490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282494: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x282494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x282498: 0x240600be  addiu       $a2, $zero, 0xBE
    ctx->pc = 0x282498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x28249c: 0x24070046  addiu       $a3, $zero, 0x46
    ctx->pc = 0x28249cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2824a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2824a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824a4: 0xc0a0892  jal         func_282248
    ctx->pc = 0x2824A4u;
    SET_GPR_U32(ctx, 31, 0x2824ACu);
    ctx->pc = 0x2824A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2824A4u;
    // 0x2824a8: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x2824A4u, 0x2824ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2824ACu;
label_2824ac:
    // 0x2824ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2824acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824b0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2824b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2824b4: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x2824b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2824b8: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x2824b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2824bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2824bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824c0: 0xc0a0892  jal         func_282248
    ctx->pc = 0x2824C0u;
    SET_GPR_U32(ctx, 31, 0x2824C8u);
    ctx->pc = 0x2824C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2824C0u;
    // 0x2824c4: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x2824C0u, 0x2824C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2824C8u;
label_2824c8:
    // 0x2824c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2824c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824cc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2824ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2824d0: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2824d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2824d4: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x2824d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2824d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2824d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824dc: 0xc0a0892  jal         func_282248
    ctx->pc = 0x2824DCu;
    SET_GPR_U32(ctx, 31, 0x2824E4u);
    ctx->pc = 0x2824E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2824DCu;
    // 0x2824e0: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x2824DCu, 0x2824E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2824E4u;
label_2824e4:
    // 0x2824e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2824e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824e8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2824e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2824ec: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x2824ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2824f0: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2824f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2824f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2824f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824f8: 0xc0a0892  jal         func_282248
    ctx->pc = 0x2824F8u;
    SET_GPR_U32(ctx, 31, 0x282500u);
    ctx->pc = 0x2824FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2824F8u;
    // 0x2824fc: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x2824F8u, 0x282500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282500u;
label_282500:
    // 0x282500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282504: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x282504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x282508: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x282508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28250c: 0x24070096  addiu       $a3, $zero, 0x96
    ctx->pc = 0x28250cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x282510: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282510u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282514: 0xc0a0892  jal         func_282248
    ctx->pc = 0x282514u;
    SET_GPR_U32(ctx, 31, 0x28251Cu);
    ctx->pc = 0x282518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282514u;
    // 0x282518: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x282514u, 0x28251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28251Cu;
label_28251c:
    // 0x28251c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28251cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282520: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x282520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x282524: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x282524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282528: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x282528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x28252c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28252cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282530: 0xc0a0892  jal         func_282248
    ctx->pc = 0x282530u;
    SET_GPR_U32(ctx, 31, 0x282538u);
    ctx->pc = 0x282534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282530u;
    // 0x282534: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x282530u, 0x282538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282538u;
label_282538:
    // 0x282538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28253c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x28253cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x282540: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x282540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282544: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x282544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x282548: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282548u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28254c: 0xc0a0892  jal         func_282248
    ctx->pc = 0x28254Cu;
    SET_GPR_U32(ctx, 31, 0x282554u);
    ctx->pc = 0x282550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28254Cu;
    // 0x282550: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x28254Cu, 0x282554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282554u;
label_282554:
    // 0x282554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282558: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x282558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x28255c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28255cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282560: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x282560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x282564: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282564u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282568: 0xc0a0892  jal         func_282248
    ctx->pc = 0x282568u;
    SET_GPR_U32(ctx, 31, 0x282570u);
    ctx->pc = 0x28256Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282568u;
    // 0x28256c: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x282568u, 0x282570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282570u;
label_282570:
    // 0x282570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282574: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x282574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x282578: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x282578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x28257c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x28257cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x282580: 0x240800d2  addiu       $t0, $zero, 0xD2
    ctx->pc = 0x282580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x282584: 0xc0a0892  jal         func_282248
    ctx->pc = 0x282584u;
    SET_GPR_U32(ctx, 31, 0x28258Cu);
    ctx->pc = 0x282588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282584u;
    // 0x282588: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x282584u, 0x28258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28258Cu;
label_28258c:
    // 0x28258c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28258cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282590: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x282590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x282594: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x282594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282598: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x282598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28259c: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x28259cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2825a0: 0xc0a0892  jal         func_282248
    ctx->pc = 0x2825A0u;
    SET_GPR_U32(ctx, 31, 0x2825A8u);
    ctx->pc = 0x2825A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2825A0u;
    // 0x2825a4: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x2825A0u, 0x2825A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2825A8u;
label_2825a8:
    // 0x2825a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2825a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825ac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2825acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2825b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2825b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2825b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825b8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2825b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2825bc: 0xc0a0892  jal         func_282248
    ctx->pc = 0x2825BCu;
    SET_GPR_U32(ctx, 31, 0x2825C4u);
    ctx->pc = 0x2825C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2825BCu;
    // 0x2825c0: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x2825BCu, 0x2825C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2825C4u;
label_2825c4:
    // 0x2825c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2825c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825c8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2825c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2825cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2825ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2825d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825d4: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x2825d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2825d8: 0xc0a0892  jal         func_282248
    ctx->pc = 0x2825D8u;
    SET_GPR_U32(ctx, 31, 0x2825E0u);
    ctx->pc = 0x2825DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2825D8u;
    // 0x2825dc: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x2825D8u, 0x2825E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2825E0u;
label_2825e0:
    // 0x2825e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2825e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825e4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2825e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2825e8: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x2825e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2825ec: 0x240700b4  addiu       $a3, $zero, 0xB4
    ctx->pc = 0x2825ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2825f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2825f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825f4: 0xc0a0892  jal         func_282248
    ctx->pc = 0x2825F4u;
    SET_GPR_U32(ctx, 31, 0x2825FCu);
    ctx->pc = 0x2825F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2825F4u;
    // 0x2825f8: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x2825F4u, 0x2825FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2825FCu;
label_2825fc:
    // 0x2825fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2825fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282600: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x282600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x282604: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x282604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x282608: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x282608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x28260c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28260cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282610: 0xc0a0892  jal         func_282248
    ctx->pc = 0x282610u;
    SET_GPR_U32(ctx, 31, 0x282618u);
    ctx->pc = 0x282614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282610u;
    // 0x282614: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x282610u, 0x282618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282618u;
label_282618:
    // 0x282618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28261c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x28261cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x282620: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x282620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x282624: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x282624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x282628: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28262c: 0xc0a0892  jal         func_282248
    ctx->pc = 0x28262Cu;
    SET_GPR_U32(ctx, 31, 0x282634u);
    ctx->pc = 0x282630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28262Cu;
    // 0x282630: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x28262Cu, 0x282634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282634u;
label_282634:
    // 0x282634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282638: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x282638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x28263c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x28263cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x282640: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x282640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x282644: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282644u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282648: 0xc0a0892  jal         func_282248
    ctx->pc = 0x282648u;
    SET_GPR_U32(ctx, 31, 0x282650u);
    ctx->pc = 0x28264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282648u;
    // 0x28264c: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x282648u, 0x282650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282650u;
label_282650:
    // 0x282650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282654: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x282654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x282658: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x282658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28265c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28265cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282660: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x282660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x282664: 0xc0a0892  jal         func_282248
    ctx->pc = 0x282664u;
    SET_GPR_U32(ctx, 31, 0x28266Cu);
    ctx->pc = 0x282668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282664u;
    // 0x282668: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x282664u, 0x28266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28266Cu;
label_28266c:
    // 0x28266c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28266cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282670: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x282670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x282674: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x282674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x282678: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x282678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28267c: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x28267cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x282680: 0xc0a0892  jal         func_282248
    ctx->pc = 0x282680u;
    SET_GPR_U32(ctx, 31, 0x282688u);
    ctx->pc = 0x282684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282680u;
    // 0x282684: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x282680u, 0x282688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282688u;
label_282688:
    // 0x282688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28268c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x28268cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x282690: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x282690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x282694: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x282694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282698: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x282698u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28269c: 0xc0a0892  jal         func_282248
    ctx->pc = 0x28269Cu;
    SET_GPR_U32(ctx, 31, 0x2826A4u);
    ctx->pc = 0x2826A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28269Cu;
    // 0x2826a0: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x28269Cu, 0x2826A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2826A4u;
label_2826a4:
    // 0x2826a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2826a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2826a8: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x2826a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2826ac: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2826acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2826b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2826b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2826b4: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x2826b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2826b8: 0xc0a0892  jal         func_282248
    ctx->pc = 0x2826B8u;
    SET_GPR_U32(ctx, 31, 0x2826C0u);
    ctx->pc = 0x2826BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2826B8u;
    // 0x2826bc: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x2826B8u, 0x2826C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2826C0u;
label_2826c0:
    // 0x2826c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2826c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2826c4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2826c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2826c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2826c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2826cc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2826ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2826d0: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2826d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2826d4: 0xc0a0892  jal         func_282248
    ctx->pc = 0x2826D4u;
    SET_GPR_U32(ctx, 31, 0x2826DCu);
    ctx->pc = 0x2826D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2826D4u;
    // 0x2826d8: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x2826D4u, 0x2826DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2826DCu;
label_2826dc:
    // 0x2826dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2826dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2826e0: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2826e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2826e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2826e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2826e8: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x2826e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2826ec: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x2826ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2826f0: 0xc0a0892  jal         func_282248
    ctx->pc = 0x2826F0u;
    SET_GPR_U32(ctx, 31, 0x2826F8u);
    ctx->pc = 0x2826F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2826F0u;
    // 0x2826f4: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x2826F0u, 0x2826F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2826F8u;
label_2826f8:
    // 0x2826f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2826f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2826fc: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2826fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x282700: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x282700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282704: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x282704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x282708: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x282708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28270c: 0xc0a0892  jal         func_282248
    ctx->pc = 0x28270Cu;
    SET_GPR_U32(ctx, 31, 0x282714u);
    ctx->pc = 0x282710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28270Cu;
    // 0x282710: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x28270Cu, 0x282714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282714u;
label_282714:
    // 0x282714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282718: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x282718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x28271c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28271cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282720: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x282720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x282724: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x282724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x282728: 0xc0a0892  jal         func_282248
    ctx->pc = 0x282728u;
    SET_GPR_U32(ctx, 31, 0x282730u);
    ctx->pc = 0x28272Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282728u;
    // 0x28272c: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x282728u, 0x282730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282730u;
label_282730:
    // 0x282730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282734: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x282734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x282738: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x282738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28273c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28273cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282740: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x282740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x282744: 0xc0a0892  jal         func_282248
    ctx->pc = 0x282744u;
    SET_GPR_U32(ctx, 31, 0x28274Cu);
    ctx->pc = 0x282748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282744u;
    // 0x282748: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x282744u, 0x28274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28274Cu;
label_28274c:
    // 0x28274c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28274cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282750: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x282750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x282754: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x282754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282758: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x282758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28275c: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x28275cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x282760: 0xc0a0892  jal         func_282248
    ctx->pc = 0x282760u;
    SET_GPR_U32(ctx, 31, 0x282768u);
    ctx->pc = 0x282764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282760u;
    // 0x282764: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x282760u, 0x282768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282768u;
label_282768:
    // 0x282768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28276c: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x28276cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x282770: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x282770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282774: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x282774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282778: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x282778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28277c: 0xc0a0892  jal         func_282248
    ctx->pc = 0x28277Cu;
    SET_GPR_U32(ctx, 31, 0x282784u);
    ctx->pc = 0x282780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28277Cu;
    // 0x282780: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x28277Cu, 0x282784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282784u;
label_282784:
    // 0x282784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x282784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282788: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x282788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28278c: 0x3e00008  jr          $ra
    ctx->pc = 0x28278Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28278Cu;
        // 0x282790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28278Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282794u;
    // 0x282794: 0x0  nop
    ctx->pc = 0x282794u;
    // NOP
    ctx->pc = 0x282798u;
}
