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

// Function: sub_002711D8
// Address: 0x2711d8 - 0x271340
void sub_002711D8_0x2711d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002711D8_0x2711d8");
#endif

    switch (ctx->pc) {
        case 0x271204u: goto label_271204;
        case 0x271218u: goto label_271218;
        case 0x27122cu: goto label_27122c;
        case 0x271240u: goto label_271240;
        case 0x271254u: goto label_271254;
        case 0x271268u: goto label_271268;
        case 0x27127cu: goto label_27127c;
        case 0x271290u: goto label_271290;
        case 0x2712a4u: goto label_2712a4;
        case 0x271304u: goto label_271304;
        case 0x27132cu: goto label_27132c;
        default: break;
    }

    ctx->pc = 0x2711d8u;

    // 0x2711d8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2711d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2711dc: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2711dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2711e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2711e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2711e4: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x2711e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x2711e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2711e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2711ec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2711ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2711f0: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x2711f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x2711f4: 0x24a57e80  addiu       $a1, $a1, 0x7E80
    ctx->pc = 0x2711f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32384));
    // 0x2711f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2711f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2711fc: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x2711FCu;
    SET_GPR_U32(ctx, 31, 0x271204u);
    ctx->pc = 0x271200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2711FCu;
    // 0x271200: 0x26260270  addiu       $a2, $s1, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x2711FCu, 0x271204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271204u;
label_271204:
    // 0x271204: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x271204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x271208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27120c: 0x24a57e90  addiu       $a1, $a1, 0x7E90
    ctx->pc = 0x27120cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32400));
    // 0x271210: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x271210u;
    SET_GPR_U32(ctx, 31, 0x271218u);
    ctx->pc = 0x271214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271210u;
    // 0x271214: 0x26260280  addiu       $a2, $s1, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x271210u, 0x271218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271218u;
label_271218:
    // 0x271218: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x271218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x27121c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27121cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271220: 0x24a57ea0  addiu       $a1, $a1, 0x7EA0
    ctx->pc = 0x271220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32416));
    // 0x271224: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x271224u;
    SET_GPR_U32(ctx, 31, 0x27122Cu);
    ctx->pc = 0x271228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271224u;
    // 0x271228: 0x26260274  addiu       $a2, $s1, 0x274 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x271224u, 0x27122Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27122Cu;
label_27122c:
    // 0x27122c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x27122cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x271230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271234: 0x24a57eb0  addiu       $a1, $a1, 0x7EB0
    ctx->pc = 0x271234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32432));
    // 0x271238: 0xc0b5e2c  jal         func_2D78B0
    ctx->pc = 0x271238u;
    SET_GPR_U32(ctx, 31, 0x271240u);
    ctx->pc = 0x27123Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271238u;
    // 0x27123c: 0x26260278  addiu       $a2, $s1, 0x278 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D78B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D78B0u, 0x271238u, 0x271240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271240u;
label_271240:
    // 0x271240: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x271240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x271244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271248: 0x24a57ec8  addiu       $a1, $a1, 0x7EC8
    ctx->pc = 0x271248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32456));
    // 0x27124c: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x27124Cu;
    SET_GPR_U32(ctx, 31, 0x271254u);
    ctx->pc = 0x271250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27124Cu;
    // 0x271250: 0x26260288  addiu       $a2, $s1, 0x288 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x27124Cu, 0x271254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271254u;
label_271254:
    // 0x271254: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x271254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x271258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27125c: 0x24a57ed0  addiu       $a1, $a1, 0x7ED0
    ctx->pc = 0x27125cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32464));
    // 0x271260: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x271260u;
    SET_GPR_U32(ctx, 31, 0x271268u);
    ctx->pc = 0x271264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271260u;
    // 0x271264: 0x26260284  addiu       $a2, $s1, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x271260u, 0x271268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271268u;
label_271268:
    // 0x271268: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x271268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x27126c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27126cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271270: 0x24a57ed8  addiu       $a1, $a1, 0x7ED8
    ctx->pc = 0x271270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32472));
    // 0x271274: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x271274u;
    SET_GPR_U32(ctx, 31, 0x27127Cu);
    ctx->pc = 0x271278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271274u;
    // 0x271278: 0x26260290  addiu       $a2, $s1, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x271274u, 0x27127Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27127Cu;
label_27127c:
    // 0x27127c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x27127cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x271280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271284: 0x24a57ef0  addiu       $a1, $a1, 0x7EF0
    ctx->pc = 0x271284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32496));
    // 0x271288: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x271288u;
    SET_GPR_U32(ctx, 31, 0x271290u);
    ctx->pc = 0x27128Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271288u;
    // 0x27128c: 0x26260294  addiu       $a2, $s1, 0x294 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 660));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x271288u, 0x271290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271290u;
label_271290:
    // 0x271290: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x271290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x271294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271298: 0x24a57f00  addiu       $a1, $a1, 0x7F00
    ctx->pc = 0x271298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32512));
    // 0x27129c: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x27129Cu;
    SET_GPR_U32(ctx, 31, 0x2712A4u);
    ctx->pc = 0x2712A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27129Cu;
    // 0x2712a0: 0x262602ac  addiu       $a2, $s1, 0x2AC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 684));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x27129Cu, 0x2712A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2712A4u;
label_2712a4:
    // 0x2712a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2712a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2712a8: 0xc62002ac  lwc1        $f0, 0x2AC($s1)
    ctx->pc = 0x2712a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2712ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2712acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2712b0: 0x0  nop
    ctx->pc = 0x2712b0u;
    // NOP
    // 0x2712b4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2712B4u;
    {
        const bool branch_taken_0x2712b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2712b4) {
            ctx->pc = 0x2712B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2712B4u;
            // 0x2712b8: 0xe62102ac  swc1        $f1, 0x2AC($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 684), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2712BCu;
            goto label_2712bc;
        }
    }
    ctx->pc = 0x2712BCu;
label_2712bc:
    // 0x2712bc: 0xc62002ac  lwc1        $f0, 0x2AC($s1)
    ctx->pc = 0x2712bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2712c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2712c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2712c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2712c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2712c8: 0x0  nop
    ctx->pc = 0x2712c8u;
    // NOP
    // 0x2712cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2712ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2712d0: 0x0  nop
    ctx->pc = 0x2712d0u;
    // NOP
    // 0x2712d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2712D4u;
    {
        const bool branch_taken_0x2712d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2712d4) {
            ctx->pc = 0x2712D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2712D4u;
            // 0x2712d8: 0xe62102ac  swc1        $f1, 0x2AC($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 684), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2712DCu;
            goto label_2712dc;
        }
    }
    ctx->pc = 0x2712DCu;
label_2712dc:
    // 0x2712dc: 0x8e220288  lw          $v0, 0x288($s1)
    ctx->pc = 0x2712dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x2712e0: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x2712e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x2712e4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2712E4u;
    {
        const bool branch_taken_0x2712e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2712e4) {
            ctx->pc = 0x2712E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2712E4u;
            // 0x2712e8: 0x8e220284  lw          $v0, 0x284($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271308u;
            goto label_271308;
        }
    }
    ctx->pc = 0x2712ECu;
    // 0x2712ec: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2712ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x2712f0: 0x8e2700f8  lw          $a3, 0xF8($s1)
    ctx->pc = 0x2712f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x2712f4: 0x24c67f18  addiu       $a2, $a2, 0x7F18
    ctx->pc = 0x2712f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32536));
    // 0x2712f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2712f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2712fc: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x2712FCu;
    SET_GPR_U32(ctx, 31, 0x271304u);
    ctx->pc = 0x271300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2712FCu;
    // 0x271300: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x2712FCu, 0x271304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271304u;
label_271304:
    // 0x271304: 0x8e220284  lw          $v0, 0x284($s1)
    ctx->pc = 0x271304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
label_271308:
    // 0x271308: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x271308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x27130c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27130Cu;
    {
        const bool branch_taken_0x27130c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27130Cu;
        // 0x271310: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27130c) {
            ctx->pc = 0x271330u;
            goto label_271330;
        }
    }
    ctx->pc = 0x271314u;
    // 0x271314: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x271314u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x271318: 0x8e2700f8  lw          $a3, 0xF8($s1)
    ctx->pc = 0x271318u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x27131c: 0x24c67f48  addiu       $a2, $a2, 0x7F48
    ctx->pc = 0x27131cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32584));
    // 0x271320: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x271320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271324: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x271324u;
    SET_GPR_U32(ctx, 31, 0x27132Cu);
    ctx->pc = 0x271328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271324u;
    // 0x271328: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x271324u, 0x27132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27132Cu;
label_27132c:
    // 0x27132c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x27132cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_271330:
    // 0x271330: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x271330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x271334: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x271334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x271338: 0x3e00008  jr          $ra
    ctx->pc = 0x271338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271338u;
        // 0x27133c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271340u;
}
